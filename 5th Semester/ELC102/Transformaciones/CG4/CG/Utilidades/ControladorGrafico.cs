﻿using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace CG.Utilidades
{
    public class ControladorGrafico
    {
        public Pen LapizGenerico = new Pen(Color.Black);
        
        private Pen LapizEjeX = new Pen(Color.Blue);
        private Pen LapizEjeY = new Pen(Color.Red);
        private Graphics Grafico;
        private Control Controlador;
        public Punto PuntoReferencia;
        public Tuple<Punto, Punto> RectaReferencia;

        public void AñadirPunto(Punto x)
        {
            if(RectaReferencia.Item1==new Punto())
            {
                RectaReferencia = new Tuple<Punto, Punto>(x,null);
            }else
            if(RectaReferencia.Item2== new Punto())
            {
                Punto p = RectaReferencia.Item1;
                RectaReferencia = new Tuple<Punto, Punto>(x,p);
            }else
            {
                Punto p = RectaReferencia.Item1;
                RectaReferencia = new Tuple<Punto, Punto>(x,p);
            }
        }
            

        public ControladorGrafico(Control Controlador)
        {
            RectaReferencia = new Tuple<Punto, Punto>(new Punto(0,0), new Punto(0,0));
            PuntoReferencia = new Punto();
            Controlador.MinimumSize = new Size(300, 300);
            this.Controlador = Controlador;
            Grafico = Controlador.CreateGraphics();
        }

        public void DibujarLinea(Pen p,Punto a,Punto b)
        {
            Grafico.DrawLine(p,a.x,a.y,b.x,b.y);
        }
        Bitmap BitMap;
        public void DibujarEje()
        {
            //Controlador.Refresh();
            //BitMap = new Bitmap(Controlador.BackgroundImage);
            BitMap = new Bitmap(Controlador.ClientSize.Width, Controlador.ClientSize.Height);
            Controlador.BackgroundImage = BitMap;
            Grafico = Graphics.FromImage(Controlador.BackgroundImage);

           // Grafico = Controlador.CreateGraphics();
         
            DibujarLinea(LapizEjeX, new Punto(0, Controlador.ClientSize.Height / 2), new Punto(Controlador.ClientSize.Width, Controlador.ClientSize.Height / 2));
            DibujarLinea(LapizEjeY, new Punto(Controlador.ClientSize.Width / 2, 0), new Punto(Controlador.ClientSize.Width / 2, Controlador.ClientSize.Height));
            
        }

        public void DibujarPunto(float x,float y,float diametro)
        {
            Grafico.FillEllipse(new SolidBrush(Color.Red), x - diametro / 2, y - diametro / 2, diametro, diametro);
            //Grafico.DrawEllipse(LapizGenerico,x-diametro/2, y-diametro / 2, diametro,diametro);
        }

        public void DibujarObjeto(Objeto Objeto,Punto Origen)
        {


            Punto xx = Matematica.CoordenadaPantalla(PuntoReferencia, Origen);
            Punto aa = Matematica.CoordenadaPantalla(RectaReferencia.Item1, Origen);
            Punto bb = Matematica.CoordenadaPantalla(RectaReferencia.Item2, Origen);

            DibujarPunto(xx.x, xx.y, 10);
            DibujarPunto(aa.x, aa.y, 6);
            DibujarPunto(bb.x, bb.y, 6);
           
            DibujarLinea(new Pen(Color.Red), aa, bb);

            for (int i=0;i<Objeto.Poligonos.Count;++i)
            {
                Poligono p = Objeto.Poligonos[i];
                for(int j=0;j<p.Vertices.Count-1;++j)
                {
                    Punto a = p.Vertices[j];
                    Punto b = p.Vertices[j + 1];

                    a = Matematica.aplicarTransformacion(a,Objeto.Transformacion.matTransformacion);
                    b = Matematica.aplicarTransformacion(b,Objeto.Transformacion.matTransformacion);

                    a = Matematica.CoordenadaPantalla(a,Origen);
                    b = Matematica.CoordenadaPantalla(b,Origen);

                   

                    DibujarLinea(LapizGenerico,a,b);
                }
            }
        }

    }
}
