#ifndef __TESSCV_H__
#define __TESSCV_H__

#include <opencv2/opencv.hpp>

#include <tesseract/baseapi.h>
#include <leptonica/allheaders.h>

using namespace cv;
using namespace std;

class TessCV
{
private:
	tesseract::TessBaseAPI tess;
	std::string text;
public:
	TessCV();
	~TessCV();
	void getScreen(Mat &Image);
	string getText(Mat &Image);
};

#endif // !__TESSCV_H__