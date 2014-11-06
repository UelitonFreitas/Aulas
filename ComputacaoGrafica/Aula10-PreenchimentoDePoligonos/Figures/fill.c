void fill(int x, int y, int fillColor, int borderColor){

    int color;
    getPixel(x,y,color);

    if ( (color != borderColor) && (color != fillColor) ){
	setPixel(x, y, fillColor);
	fill(x+1, y, fillColor, borderColor);
	fill(x-1, y, fillColor, borderColor);
	fill(x, y+1, fillColor, borderColor);
	fill(x, y-1, fillColor, borderColor);
    }
}
