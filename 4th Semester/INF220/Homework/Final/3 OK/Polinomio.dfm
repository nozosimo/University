object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Polinomial Grapher'
  ClientHeight = 592
  ClientWidth = 627
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object PaintBox1: TPaintBox
    Left = 8
    Top = 112
    Width = 608
    Height = 472
    OnPaint = PaintBox1Paint
  end
  object Label1: TLabel
    Left = 320
    Top = 54
    Width = 39
    Height = 28
    Caption = '[a,b]'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Perpetua'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 347
    Top = 88
    Width = 12
    Height = 15
    Caption = 'dx'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Perpetua'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 38
    Top = 29
    Width = 57
    Height = 23
    Caption = 'p(x)=0'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -21
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentFont = False
  end
  object Label4: TLabel
    Left = 38
    Top = 85
    Width = 44
    Height = 21
    Caption = 'Area: '
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentFont = False
  end
  object Label5: TLabel
    Left = 8
    Top = 8
    Width = 49
    Height = 15
    Caption = 'Polinomio'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Perpetua'
    Font.Style = []
    ParentFont = False
  end
  object Edit1: TEdit
    Left = 365
    Top = 60
    Width = 56
    Height = 21
    TabOrder = 0
    Text = '-5'
  end
  object Edit2: TEdit
    Left = 427
    Top = 60
    Width = 56
    Height = 21
    TabOrder = 1
    Text = '5'
  end
  object Edit3: TEdit
    Left = 365
    Top = 85
    Width = 56
    Height = 18
    Enabled = False
    TabOrder = 2
    Text = '0,03125'
  end
  object Button1: TButton
    Left = 489
    Top = 57
    Width = 101
    Height = 25
    Caption = 'Graficar'
    TabOrder = 3
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 646
    Top = 321
    Width = 25
    Height = 25
    Caption = '+'
    TabOrder = 4
  end
  object Button3: TButton
    Left = 677
    Top = 321
    Width = 25
    Height = 25
    Caption = '-'
    TabOrder = 5
  end
  object Coeficientes: TButton
    Left = 117
    Top = 57
    Width = 101
    Height = 25
    Caption = 'A'#241'adir Monomio'
    TabOrder = 6
    OnClick = CoeficientesClick
  end
  object Coeficiente: TEdit
    Left = 38
    Top = 61
    Width = 33
    Height = 21
    TabOrder = 7
    Text = '0'
  end
  object Exponente: TEdit
    Left = 77
    Top = 61
    Width = 34
    Height = 21
    TabOrder = 8
    Text = '0'
  end
end