//---------------------------------------------------------------------------
#include <vcl.h>
//---------------------------------------------------------------------------
#include "Lista_frm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TListaForm *ListaForm;
//---------------------------------------------------------------------------
__fastcall TListaForm::TListaForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TListaForm::Button2Click(TObject *Sender)
{
Close();	
}
//---------------------------------------------------------------------------
void __fastcall TListaForm::Button3Click(TObject *Sender)
{
Close();	
}
//---------------------------------------------------------------------------





