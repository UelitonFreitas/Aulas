void fill(int x, int y, int fillColor, int interiorColor){

    int color;
    getPixel(x,y,color);

    if ( color == interiorColor ){
	setPixel(x, y, fillColor);
	fill(x+1, y, fillColor, interiorColor);
	fill(x-1, y, fillColor, interiorColor);
	fill(x, y+1, fillColor, interiorColor);
	fill(x, y-1, fillColor, interiorColor);
    }
}



