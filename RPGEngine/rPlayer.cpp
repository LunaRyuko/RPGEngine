#include "stdafx.h"
#include "rPlayer.h"


rPlayer::rPlayer()
{
	
}


rPlayer::~rPlayer()
{

}

void rPlayer::Frame()
{
	// ((currenttick / endtick) X current_value / end_result
	// Thanks portie


	rEntity::Frame();
}

bool rPlayer::Move(int x, int y)
{
	targetCameraOffsetX += x * 32;
	targetCameraOffsetY += y * 32;
	return rEntity::Move(x,y);
}
