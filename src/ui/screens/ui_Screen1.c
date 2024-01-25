// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.2.0
// Project name: SquareLine_Project

#include "../ui.h"

void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Watchface = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_Watchface, &ui_img_watchface2_png);
    lv_obj_set_width(ui_Watchface, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Watchface, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Watchface, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Watchface, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Watchface, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Anchor0 = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_Anchor0, &ui_img_out01_png);
    lv_obj_set_width(ui_Anchor0, 160);
    lv_obj_set_height(ui_Anchor0, 160);
    lv_obj_set_x(ui_Anchor0, 0);
    lv_obj_set_y(ui_Anchor0, 145);
    lv_obj_set_align(ui_Anchor0, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Anchor0, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Anchor0, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Anchor1 = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_Anchor1, &ui_img_out02_png);
    lv_obj_set_width(ui_Anchor1, 160);
    lv_obj_set_height(ui_Anchor1, 160);
    lv_obj_set_x(ui_Anchor1, 0);
    lv_obj_set_y(ui_Anchor1, 145);
    lv_obj_set_align(ui_Anchor1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Anchor1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Anchor1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Anchor2 = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_Anchor2, &ui_img_out03_png);
    lv_obj_set_width(ui_Anchor2, 160);
    lv_obj_set_height(ui_Anchor2, 160);
    lv_obj_set_x(ui_Anchor2, 0);
    lv_obj_set_y(ui_Anchor2, 145);
    lv_obj_set_align(ui_Anchor2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Anchor2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Anchor2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Anchor3 = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_Anchor3, &ui_img_out04_png);
    lv_obj_set_width(ui_Anchor3, 160);
    lv_obj_set_height(ui_Anchor3, 160);
    lv_obj_set_x(ui_Anchor3, 0);
    lv_obj_set_y(ui_Anchor3, 145);
    lv_obj_set_align(ui_Anchor3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Anchor3, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Anchor3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Anchor4 = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_Anchor4, &ui_img_out05_png);
    lv_obj_set_width(ui_Anchor4, 160);
    lv_obj_set_height(ui_Anchor4, 160);
    lv_obj_set_x(ui_Anchor4, 0);
    lv_obj_set_y(ui_Anchor4, 145);
    lv_obj_set_align(ui_Anchor4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Anchor4, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Anchor4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Anchor5 = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_Anchor5, &ui_img_out06_png);
    lv_obj_set_width(ui_Anchor5, 160);
    lv_obj_set_height(ui_Anchor5, 160);
    lv_obj_set_x(ui_Anchor5, 0);
    lv_obj_set_y(ui_Anchor5, 145);
    lv_obj_set_align(ui_Anchor5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Anchor5, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Anchor5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Anchor6 = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_Anchor6, &ui_img_out07_png);
    lv_obj_set_width(ui_Anchor6, 160);
    lv_obj_set_height(ui_Anchor6, 160);
    lv_obj_set_x(ui_Anchor6, 0);
    lv_obj_set_y(ui_Anchor6, 145);
    lv_obj_set_align(ui_Anchor6, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Anchor6, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Anchor6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Anchor7 = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_Anchor7, &ui_img_out08_png);
    lv_obj_set_width(ui_Anchor7, 160);
    lv_obj_set_height(ui_Anchor7, 160);
    lv_obj_set_x(ui_Anchor7, 0);
    lv_obj_set_y(ui_Anchor7, 145);
    lv_obj_set_align(ui_Anchor7, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Anchor7, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Anchor7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Anchor8 = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_Anchor8, &ui_img_out09_png);
    lv_obj_set_width(ui_Anchor8, 160);
    lv_obj_set_height(ui_Anchor8, 160);
    lv_obj_set_x(ui_Anchor8, 0);
    lv_obj_set_y(ui_Anchor8, 145);
    lv_obj_set_align(ui_Anchor8, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Anchor8, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Anchor8, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Anchor9 = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_Anchor9, &ui_img_out10_png);
    lv_obj_set_width(ui_Anchor9, 160);
    lv_obj_set_height(ui_Anchor9, 160);
    lv_obj_set_x(ui_Anchor9, 0);
    lv_obj_set_y(ui_Anchor9, 145);
    lv_obj_set_align(ui_Anchor9, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Anchor9, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Anchor9, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_ImageArmHour = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_ImageArmHour, &ui_img_arm_hour_png);
    lv_obj_set_width(ui_ImageArmHour, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ImageArmHour, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ImageArmHour, 0);
    lv_obj_set_y(ui_ImageArmHour, -67);
    lv_obj_set_align(ui_ImageArmHour, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ImageArmHour, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_ImageArmHour, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_pivot(ui_ImageArmHour, 19, 153);
    lv_img_set_angle(ui_ImageArmHour, 2950);

    ui_ImageArmMinute = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_ImageArmMinute, &ui_img_arm_minute_png);
    lv_obj_set_width(ui_ImageArmMinute, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ImageArmMinute, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ImageArmMinute, 0);
    lv_obj_set_y(ui_ImageArmMinute, -96);
    lv_obj_set_align(ui_ImageArmMinute, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ImageArmMinute, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_ImageArmMinute, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_pivot(ui_ImageArmMinute, 19, 210);
    lv_img_set_angle(ui_ImageArmMinute, 450);

    ui_ImageArmSecond = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_ImageArmSecond, &ui_img_arm_second_png);
    lv_obj_set_width(ui_ImageArmSecond, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ImageArmSecond, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ImageArmSecond, 3);
    lv_obj_set_y(ui_ImageArmSecond, -85);
    lv_obj_set_align(ui_ImageArmSecond, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ImageArmSecond, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_ImageArmSecond, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_pivot(ui_ImageArmSecond, 5, 232);
    lv_img_set_angle(ui_ImageArmSecond, 1400);

    ui_LabelWeekday = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_LabelWeekday, 100);
    lv_obj_set_height(ui_LabelWeekday, 24);
    lv_obj_set_x(ui_LabelWeekday, 103);
    lv_obj_set_y(ui_LabelWeekday, 0);
    lv_obj_set_align(ui_LabelWeekday, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelWeekday, "SUN");
    lv_obj_set_style_text_color(ui_LabelWeekday, lv_color_hex(0x4C4C4C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelWeekday, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_LabelWeekday, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_decor(ui_LabelWeekday, LV_TEXT_DECOR_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelWeekday, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LabelDate = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_LabelDate, 40);
    lv_obj_set_height(ui_LabelDate, 23);
    lv_obj_set_x(ui_LabelDate, 180);
    lv_obj_set_y(ui_LabelDate, 0);
    lv_obj_set_align(ui_LabelDate, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelDate, "25");
    lv_obj_set_style_text_color(ui_LabelDate, lv_color_hex(0x4C4C4C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LabelDate, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_LabelDate, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LabelDate, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

}
