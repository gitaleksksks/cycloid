//---------------------------------------------------------------------------

#include <vcl.h>
#include <math.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

double r, a;
int p;
double inc = 0;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
Timer1->Interval = 40;
}
//---------------------------------------------------------------------------
double X (double t)
{
  return r*(t-sin(t));
}
//---------------------------------------------------------------------------
double Y (double t)
{
  return r*(1-cos(t));
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormActivate(TObject *Sender)
{
Timer1->Enabled = false;	
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
a = StrToFloat(Edit1->Text);
r = a * 20;
p = StrToInt(Edit2->Text);
Timer1->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
if(RadioButton1->Checked)
{
Refresh();
PaintBox1->Canvas->Pen->Color = clBlack;
PaintBox1->Canvas->Ellipse(inc*r-r+300, 300-2*r, inc*r+r+300, 300);
PaintBox1->Canvas->MoveTo(X(inc)+300, 300-Y(inc));
PaintBox1->Canvas->LineTo((inc)*r+300, 300-r);
for (double i = 0; i >= inc; i -= 0.01)
PaintBox1->Canvas->Pixels[X(i)+300][300-Y(i)] = clRed;
inc -= 0.01;
if
(inc < p*2*(-M_PI))
inc = 0;


int x0, y0;

x0=(PaintBox1->Width)/2;
y0=(PaintBox1->Height)/2;
PaintBox1->Canvas->Pen->Color = clBlack;
PaintBox1->Canvas->MoveTo(x0, 30);
PaintBox1->Canvas->LineTo(x0, 570);
PaintBox1->Canvas->MoveTo(30, y0);
PaintBox1->Canvas->LineTo(570, y0);

PaintBox1->Canvas->MoveTo(40, 290);
PaintBox1->Canvas->LineTo(40, 310);

PaintBox1->Canvas->MoveTo(60, 290);
PaintBox1->Canvas->LineTo(60, 310);

PaintBox1->Canvas->MoveTo(80, 290);
PaintBox1->Canvas->LineTo(80, 310);

PaintBox1->Canvas->MoveTo(100, 290);
PaintBox1->Canvas->LineTo(100, 310);

PaintBox1->Canvas->MoveTo(120, 290);
PaintBox1->Canvas->LineTo(120, 310);

PaintBox1->Canvas->MoveTo(140, 290);
PaintBox1->Canvas->LineTo(140, 310);

PaintBox1->Canvas->MoveTo(160, 290);
PaintBox1->Canvas->LineTo(160, 310);

PaintBox1->Canvas->MoveTo(180, 290);
PaintBox1->Canvas->LineTo(180, 310);

PaintBox1->Canvas->MoveTo(200, 290);
PaintBox1->Canvas->LineTo(200, 310);

PaintBox1->Canvas->MoveTo(220, 290);
PaintBox1->Canvas->LineTo(220, 310);

PaintBox1->Canvas->MoveTo(240, 290);
PaintBox1->Canvas->LineTo(240, 310);

PaintBox1->Canvas->MoveTo(260, 290);
PaintBox1->Canvas->LineTo(260, 310);

PaintBox1->Canvas->MoveTo(280, 290);
PaintBox1->Canvas->LineTo(280, 310);

PaintBox1->Canvas->MoveTo(320, 290);
PaintBox1->Canvas->LineTo(320, 310);

PaintBox1->Canvas->MoveTo(340, 290);
PaintBox1->Canvas->LineTo(340, 310);

PaintBox1->Canvas->MoveTo(360, 290);
PaintBox1->Canvas->LineTo(360, 310);

PaintBox1->Canvas->MoveTo(380, 290);
PaintBox1->Canvas->LineTo(380, 310);

PaintBox1->Canvas->MoveTo(400, 290);
PaintBox1->Canvas->LineTo(400, 310);

PaintBox1->Canvas->MoveTo(420, 290);
PaintBox1->Canvas->LineTo(420, 310);

PaintBox1->Canvas->MoveTo(440, 290);
PaintBox1->Canvas->LineTo(440, 310);

PaintBox1->Canvas->MoveTo(460, 290);
PaintBox1->Canvas->LineTo(460, 310);

PaintBox1->Canvas->MoveTo(480, 290);
PaintBox1->Canvas->LineTo(480, 310);

PaintBox1->Canvas->MoveTo(500, 290);
PaintBox1->Canvas->LineTo(500, 310);

PaintBox1->Canvas->MoveTo(520, 290);
PaintBox1->Canvas->LineTo(520, 310);

PaintBox1->Canvas->MoveTo(540, 290);
PaintBox1->Canvas->LineTo(540, 310);

PaintBox1->Canvas->MoveTo(560, 290);
PaintBox1->Canvas->LineTo(560, 310);

PaintBox1->Canvas->MoveTo(290, 40);
PaintBox1->Canvas->LineTo(310, 40);

PaintBox1->Canvas->MoveTo(290, 60);
PaintBox1->Canvas->LineTo(310, 60);

PaintBox1->Canvas->MoveTo(290, 80);
PaintBox1->Canvas->LineTo(310, 80);

PaintBox1->Canvas->MoveTo(290, 100);
PaintBox1->Canvas->LineTo(310, 100);

PaintBox1->Canvas->MoveTo(290, 120);
PaintBox1->Canvas->LineTo(310, 120);

PaintBox1->Canvas->MoveTo(290, 140);
PaintBox1->Canvas->LineTo(310, 140);

PaintBox1->Canvas->MoveTo(290, 160);
PaintBox1->Canvas->LineTo(310, 160);

PaintBox1->Canvas->MoveTo(290, 180);
PaintBox1->Canvas->LineTo(310, 180);

PaintBox1->Canvas->MoveTo(290, 200);
PaintBox1->Canvas->LineTo(310, 200);

PaintBox1->Canvas->MoveTo(290, 220);
PaintBox1->Canvas->LineTo(310, 220);

PaintBox1->Canvas->MoveTo(290, 240);
PaintBox1->Canvas->LineTo(310, 240);

PaintBox1->Canvas->MoveTo(290, 260);
PaintBox1->Canvas->LineTo(310, 260);

PaintBox1->Canvas->MoveTo(290, 280);
PaintBox1->Canvas->LineTo(310, 280);

PaintBox1->Canvas->MoveTo(290, 320);
PaintBox1->Canvas->LineTo(310, 320);

PaintBox1->Canvas->MoveTo(290, 340);
PaintBox1->Canvas->LineTo(310, 340);

PaintBox1->Canvas->MoveTo(290, 360);
PaintBox1->Canvas->LineTo(310, 360);

PaintBox1->Canvas->MoveTo(290, 380);
PaintBox1->Canvas->LineTo(310, 380);

PaintBox1->Canvas->MoveTo(290, 400);
PaintBox1->Canvas->LineTo(310, 400);

PaintBox1->Canvas->MoveTo(290, 420);
PaintBox1->Canvas->LineTo(310, 420);

PaintBox1->Canvas->MoveTo(290, 440);
PaintBox1->Canvas->LineTo(310, 440);

PaintBox1->Canvas->MoveTo(290, 460);
PaintBox1->Canvas->LineTo(310, 460);

PaintBox1->Canvas->MoveTo(290, 480);
PaintBox1->Canvas->LineTo(310, 480);

PaintBox1->Canvas->MoveTo(290, 500);
PaintBox1->Canvas->LineTo(310, 500);

PaintBox1->Canvas->MoveTo(290, 520);
PaintBox1->Canvas->LineTo(310, 520);

PaintBox1->Canvas->MoveTo(290, 540);
PaintBox1->Canvas->LineTo(310, 540);

PaintBox1->Canvas->MoveTo(290, 560);
PaintBox1->Canvas->LineTo(310, 560);
}



if(RadioButton2->Checked)
{
Refresh();
PaintBox1->Canvas->Pen->Color = clBlack;
PaintBox1->Canvas->Ellipse(inc*r-r+300, 300-2*r, inc*r+r+300, 300);
PaintBox1->Canvas->MoveTo(X(inc)+300, 300-Y(inc));
PaintBox1->Canvas->LineTo((inc)*r+300, 300-r);
for (double i = 0; i <= inc; i += 0.01)
PaintBox1->Canvas->Pixels[X(i)+300][300-Y(i)] = clRed;
inc += 0.01;
if
(inc > p*2*M_PI)
inc = 0;


double R, x, y, fn, fk, t;
int x0, y0, m;

x0=(PaintBox1->Width)/2;
y0=(PaintBox1->Height)/2;
PaintBox1->Canvas->Pen->Color = clBlack;
PaintBox1->Canvas->MoveTo(x0, 30);
PaintBox1->Canvas->LineTo(x0, 570);
PaintBox1->Canvas->MoveTo(30, y0);
PaintBox1->Canvas->LineTo(570, y0);

PaintBox1->Canvas->MoveTo(40, 290);
PaintBox1->Canvas->LineTo(40, 310);

PaintBox1->Canvas->MoveTo(60, 290);
PaintBox1->Canvas->LineTo(60, 310);

PaintBox1->Canvas->MoveTo(80, 290);
PaintBox1->Canvas->LineTo(80, 310);

PaintBox1->Canvas->MoveTo(100, 290);
PaintBox1->Canvas->LineTo(100, 310);

PaintBox1->Canvas->MoveTo(120, 290);
PaintBox1->Canvas->LineTo(120, 310);

PaintBox1->Canvas->MoveTo(140, 290);
PaintBox1->Canvas->LineTo(140, 310);

PaintBox1->Canvas->MoveTo(160, 290);
PaintBox1->Canvas->LineTo(160, 310);

PaintBox1->Canvas->MoveTo(180, 290);
PaintBox1->Canvas->LineTo(180, 310);

PaintBox1->Canvas->MoveTo(200, 290);
PaintBox1->Canvas->LineTo(200, 310);

PaintBox1->Canvas->MoveTo(220, 290);
PaintBox1->Canvas->LineTo(220, 310);

PaintBox1->Canvas->MoveTo(240, 290);
PaintBox1->Canvas->LineTo(240, 310);

PaintBox1->Canvas->MoveTo(260, 290);
PaintBox1->Canvas->LineTo(260, 310);

PaintBox1->Canvas->MoveTo(280, 290);
PaintBox1->Canvas->LineTo(280, 310);

PaintBox1->Canvas->MoveTo(320, 290);
PaintBox1->Canvas->LineTo(320, 310);

PaintBox1->Canvas->MoveTo(340, 290);
PaintBox1->Canvas->LineTo(340, 310);

PaintBox1->Canvas->MoveTo(360, 290);
PaintBox1->Canvas->LineTo(360, 310);

PaintBox1->Canvas->MoveTo(380, 290);
PaintBox1->Canvas->LineTo(380, 310);

PaintBox1->Canvas->MoveTo(400, 290);
PaintBox1->Canvas->LineTo(400, 310);

PaintBox1->Canvas->MoveTo(420, 290);
PaintBox1->Canvas->LineTo(420, 310);

PaintBox1->Canvas->MoveTo(440, 290);
PaintBox1->Canvas->LineTo(440, 310);

PaintBox1->Canvas->MoveTo(460, 290);
PaintBox1->Canvas->LineTo(460, 310);

PaintBox1->Canvas->MoveTo(480, 290);
PaintBox1->Canvas->LineTo(480, 310);

PaintBox1->Canvas->MoveTo(500, 290);
PaintBox1->Canvas->LineTo(500, 310);

PaintBox1->Canvas->MoveTo(520, 290);
PaintBox1->Canvas->LineTo(520, 310);

PaintBox1->Canvas->MoveTo(540, 290);
PaintBox1->Canvas->LineTo(540, 310);

PaintBox1->Canvas->MoveTo(560, 290);
PaintBox1->Canvas->LineTo(560, 310);

PaintBox1->Canvas->MoveTo(290, 40);
PaintBox1->Canvas->LineTo(310, 40);

PaintBox1->Canvas->MoveTo(290, 60);
PaintBox1->Canvas->LineTo(310, 60);

PaintBox1->Canvas->MoveTo(290, 80);
PaintBox1->Canvas->LineTo(310, 80);

PaintBox1->Canvas->MoveTo(290, 100);
PaintBox1->Canvas->LineTo(310, 100);

PaintBox1->Canvas->MoveTo(290, 120);
PaintBox1->Canvas->LineTo(310, 120);

PaintBox1->Canvas->MoveTo(290, 140);
PaintBox1->Canvas->LineTo(310, 140);

PaintBox1->Canvas->MoveTo(290, 160);
PaintBox1->Canvas->LineTo(310, 160);

PaintBox1->Canvas->MoveTo(290, 180);
PaintBox1->Canvas->LineTo(310, 180);

PaintBox1->Canvas->MoveTo(290, 200);
PaintBox1->Canvas->LineTo(310, 200);

PaintBox1->Canvas->MoveTo(290, 220);
PaintBox1->Canvas->LineTo(310, 220);

PaintBox1->Canvas->MoveTo(290, 240);
PaintBox1->Canvas->LineTo(310, 240);

PaintBox1->Canvas->MoveTo(290, 260);
PaintBox1->Canvas->LineTo(310, 260);

PaintBox1->Canvas->MoveTo(290, 280);
PaintBox1->Canvas->LineTo(310, 280);

PaintBox1->Canvas->MoveTo(290, 320);
PaintBox1->Canvas->LineTo(310, 320);

PaintBox1->Canvas->MoveTo(290, 340);
PaintBox1->Canvas->LineTo(310, 340);

PaintBox1->Canvas->MoveTo(290, 360);
PaintBox1->Canvas->LineTo(310, 360);

PaintBox1->Canvas->MoveTo(290, 380);
PaintBox1->Canvas->LineTo(310, 380);

PaintBox1->Canvas->MoveTo(290, 400);
PaintBox1->Canvas->LineTo(310, 400);

PaintBox1->Canvas->MoveTo(290, 420);
PaintBox1->Canvas->LineTo(310, 420);

PaintBox1->Canvas->MoveTo(290, 440);
PaintBox1->Canvas->LineTo(310, 440);

PaintBox1->Canvas->MoveTo(290, 460);
PaintBox1->Canvas->LineTo(310, 460);

PaintBox1->Canvas->MoveTo(290, 480);
PaintBox1->Canvas->LineTo(310, 480);

PaintBox1->Canvas->MoveTo(290, 500);
PaintBox1->Canvas->LineTo(310, 500);

PaintBox1->Canvas->MoveTo(290, 520);
PaintBox1->Canvas->LineTo(310, 520);

PaintBox1->Canvas->MoveTo(290, 540);
PaintBox1->Canvas->LineTo(310, 540);

PaintBox1->Canvas->MoveTo(290, 560);
PaintBox1->Canvas->LineTo(310, 560);
}
}
//---------------------------------------------------------------------------
