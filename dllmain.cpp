// No Cursor Escape by ItsClonkAndre

#include "ZHookBase.cpp"

void scriptLoad()
{

}
void scriptUnload()
{

}

void scriptTick()
{
	int x, y;
	GET_SCREEN_RESOLUTION(&x, &y);

	RECT rec;
	rec.left = 0;
	rec.top = 0;
	rec.right = x;
	rec.bottom = y;
	ClipCursor(&rec);
}