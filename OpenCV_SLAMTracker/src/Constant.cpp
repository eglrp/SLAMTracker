#include "Constant.h"

double Const::arr31_001000[] = { 0, 0, 1, 0, 0, 0, 1, 1, 1 };
double Const::arr33[] = {
0, 0, 0, 0, 0, 0, 0, 0, 0,
1, 0, 0, 0, 1, 0, 0, 0, 1,
-1,0,0,0,1,0,0,0,-1
};

const cv::Mat Const::mat31_001(3, 1, CV_64FC1, arr31_001000);
const cv::Mat Const::mat31_010(3, 1, CV_64FC1, arr31_001000+1);
const cv::Mat Const::mat31_100(3, 1, CV_64FC1, arr31_001000+2);
const cv::Mat Const::mat31_000(3, 1, CV_64FC1, arr31_001000+3);
const cv::Mat Const::mat31_111(3, 1, CV_64FC1, arr31_001000+6);
const cv::Mat Const::mat33_000(3, 3, CV_64FC1, arr33);
const cv::Mat Const::mat33_111(3, 3, CV_64FC1, arr33 + 9);
const cv::Mat Const::mat33_rot180(3, 3, CV_64FC1, arr33 + 18);


const cv::Point3d Const::pnt3d_000(0, 0, 0);
const cv::Point3d Const::pnt3d_001(0, 0, 1);
const cv::Point3d Const::pnt3d_010(0, 1, 0);
const cv::Point3d Const::pnt3d_100(1, 0, 0);
const cv::Point3d Const::pnt3d_111(1, 1, 1);

void Const::Error::set(int val, bool flag)
{
	if (flag == true) {
		type = (Const::Error::Type)(val == 0 ? 0 : (val | type));
	}
		
	else {
		if (val != 0) {
			printf("Merge %d -> %d\n", type, val | type);
		}
		type = (Const::Error::Type)(val | type);
		
	}
		
}
