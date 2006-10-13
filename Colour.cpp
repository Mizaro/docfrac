//---------------------------------------------------------------------------


#pragma hdrstop

#include "Colour.h"
#include <assert.h>
//---------------------------------------------------------------------------

#pragma package(smart_init)
namespace DoxEngine
{
  Colour::Colour()
  {
	SetDefault();
  }

  void Colour::SetDefault()
  {
	redDefault = true;
	greenDefault = true;
	blueDefault = true;
  }

  void Colour::SetRed(int value)
  {
	redDefault = false;
	red = value;
  }

  void Colour::SetGreen(int value)
  {
	greenDefault = false;
	green = value;
  }

  void Colour::SetBlue(int value)
  {
	blueDefault = false;
	blue = value;
  }

  bool Colour::IsDefault() const
  {
    return redDefault || greenDefault || blueDefault;
  }

	int Colour::GetRed() const
	{
	assert(!IsDefault());
	return red;
	}

	int Colour::GetGreen() const
	{
	assert(!IsDefault());
	return green;
	}

	int Colour::GetBlue() const
	{
	assert(!IsDefault());
	return blue;
  }

}
