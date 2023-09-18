// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.1
// LVGL version: 8.3.6
// Project name: gen_vscode_proj

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////

// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
lv_obj_t * ui_Screen1;
lv_obj_t * ui_TabView1;
lv_obj_t * ui_TabPage1;
lv_obj_t * ui_Label1;
lv_obj_t * ui_TabPage2;
lv_obj_t * ui_TabView2;
lv_obj_t * ui_TabPage4;
lv_obj_t * ui_Label2;
lv_obj_t * ui_TabPage5;
lv_obj_t * ui_Label3;
lv_obj_t * ui_TabPage6;
lv_obj_t * ui_TabPage3;
lv_obj_t * ui_Panel1;
lv_obj_t * ui_Panel2;
lv_obj_t * ui_Slider1;
lv_obj_t * ui_Label4;
lv_obj_t * ui_Label5;
void ui_event_Panel3(lv_event_t * e);
lv_obj_t * ui_Panel3;
lv_obj_t * ui_Button1;
lv_obj_t * ui_Label8;
lv_obj_t * ui_Label6;
void ui_event_Button2(lv_event_t * e);
lv_obj_t * ui_Button2;
void ui_event_Button3(lv_event_t * e);
lv_obj_t * ui_Button3;
lv_obj_t * ui_Label7;
lv_obj_t * ui_TabPage7;
lv_obj_t * ui_Image2;
lv_obj_t * ui_TabPage8;
lv_obj_t * ui____initial_actions0;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 32
    #error "LV_COLOR_DEPTH should be 32bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_Panel3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_slider_increment(ui_Slider1, 1, LV_ANIM_ON);
    }
}
void ui_event_Button2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_state_modify(ui_Button3, LV_STATE_CHECKED, _UI_MODIFY_STATE_REMOVE);
    }
    if(event_code == LV_EVENT_CLICKED) {
        _ui_state_modify(ui_Button2, LV_STATE_CHECKED, _UI_MODIFY_STATE_ADD);
    }
}
void ui_event_Button3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_state_modify(ui_Button2, LV_STATE_CHECKED, _UI_MODIFY_STATE_REMOVE);
    }
    if(event_code == LV_EVENT_CLICKED) {
        _ui_state_modify(ui_Button3, LV_STATE_CHECKED, _UI_MODIFY_STATE_ADD);
    }
}

///////////////////// SCREENS ////////////////////

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_Screen1);
}
