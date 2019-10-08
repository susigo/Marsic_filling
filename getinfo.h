#ifndef GETINFO_H
#define GETINFO_H
#include<QSettings>

//[start_flag]
#define start_flag = 0;
#define last_img_index = 0;
#define last_loc_x = 0;
#define last_loc_y = 0;
#define last_img_w = 0;
#define last_img_h = 0;
#define last_fill_x = 0;
#define last_fill_y = 0;
#define program_close = 0;

//[settings]
#define fill_number = 16;


//[file_path]
#define last_path = "";
void getInfo();
void bootUp();
#endif // GETINFO_H
