/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package appletstest;

import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.geom.AffineTransform;
import java.util.Random;

/**
 *
 * @author Asus
 */
public class Ejercicio1 extends java.applet.Applet {

    /**
     * Initializes the applet Ejercicio1
     */
    public void init() {
        randomSeed();
        try {
            java.awt.EventQueue.invokeAndWait(new Runnable() {
                public void run() {
                    initComponents();
                }
            });
        } catch (Exception ex) {
            ex.printStackTrace();
        }
    }
    
    int horizontalSize = 640;
    int verticalSize = 640;
    int xOffset=32,yOffset=32;
    int minAge = 18, maxAge =50;
    int ageRange = maxAge-minAge;
    int quantity = 10;
    int xSpace = horizontalSize/ageRange;
    int ySpace = verticalSize/quantity;
    int verticalUnit = verticalSize/quantity;
    

    
    int numberStudents = 200;
    
    int randomSample[] = new int[100];
    int width;
    
    public void randomSeed(){
        
        width = horizontalSize/32;
        
        Random random = new Random();
        for(int i=0;i<numberStudents;++i){
            int age = 18+random.nextInt(33);
            randomSample[age]++;
        }/*
        for(int i=18;i<=50;++i){
            System.out.println(randomSample[i]);
        }*/
    }
    
    public static void drawRotate(Graphics2D g2d, double x, double y, int angle, String text) 
{    
    g2d.translate((float)x,(float)y);
    g2d.rotate(Math.toRadians(angle));
    g2d.drawString(text,0,0);
    g2d.rotate(-Math.toRadians(angle));
    g2d.translate(-(float)x,-(float)y);
}  
    
    
    @Override
    public void paint(Graphics g){
        
        g.drawString("Generacion de una muestra aleatorio de "+numberStudents + " estudiantes", 16, 16);
        
        g.drawLine(xOffset, yOffset, xOffset, yOffset+verticalSize);
        g.drawLine(xOffset, yOffset+verticalSize, xOffset+horizontalSize, yOffset+verticalSize);
       
        for(int i=0;i<=horizontalSize/xSpace;++i){
            g.drawLine(xOffset+i*xSpace, yOffset+verticalSize+5, xOffset+i*xSpace, yOffset+verticalSize-5);
        }
        
        for(int i=0;i<=verticalSize/ySpace;++i){
            g.drawLine(xOffset-5, yOffset+i*ySpace ,xOffset+5,yOffset+i*ySpace );
        }
        
        for(int i=18,j=0;i<=50;++i,j++){
            g.fillOval(xOffset+j*xSpace-4, (yOffset+verticalSize)-(randomSample[i]*verticalUnit)-4  , 8, 8);
            g.drawString(""+i, xOffset+j*xSpace-8, yOffset+verticalSize+20);
        }
        
        g.drawString("Edad", (xOffset+horizontalSize)/2, yOffset+verticalSize+40);
        
         Graphics2D g2 = (Graphics2D) g;
       drawRotate(g2, xOffset-16, (yOffset+verticalSize)/2, -90, "Cantidad");
    
    }

    /**
     * This method is called from within the init() method to initialize the
     * form. WARNING: Do NOT modify this code. The content of this method is
     * always regenerated by the Form Editor.
     */
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        setLayout(new java.awt.BorderLayout());
    }// </editor-fold>//GEN-END:initComponents


    // Variables declaration - do not modify//GEN-BEGIN:variables
    // End of variables declaration//GEN-END:variables
}