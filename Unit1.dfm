object Form1: TForm1
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'Cycloid'
  ClientHeight = 847
  ClientWidth = 659
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnActivate = FormActivate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 29
    Top = 16
    Width = 465
    Height = 32
    Caption = 'Enter the radius of the circle:'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'Consolas'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 29
    Top = 72
    Width = 480
    Height = 32
    Caption = 'Enter the number of repetitions:'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'Consolas'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object PaintBox1: TPaintBox
    Left = 29
    Top = 152
    Width = 600
    Height = 600
  end
  object Edit1: TEdit
    Left = 500
    Top = 13
    Width = 129
    Height = 40
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'Consolas'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 0
  end
  object Edit2: TEdit
    Left = 515
    Top = 69
    Width = 114
    Height = 40
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'Consolas'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
  end
  object RadioButton1: TRadioButton
    Left = 29
    Top = 115
    Width = 236
    Height = 22
    Caption = 'On negative direction of X-axis'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Consolas'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 2
  end
  object RadioButton2: TRadioButton
    Left = 395
    Top = 115
    Width = 234
    Height = 21
    Caption = 'On positive direction of X-axis'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Consolas'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 3
  end
  object Button1: TButton
    Left = 234
    Top = 768
    Width = 185
    Height = 49
    Caption = 'Run'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -27
    Font.Name = 'Consolas'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 4
    OnClick = Button1Click
  end
  object Timer1: TTimer
    OnTimer = Timer1Timer
    Left = 512
    Top = 784
  end
end
