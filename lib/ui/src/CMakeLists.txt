SET(SOURCES ui_Screen1.c
    ui.c
    ui_comp_hook.c
    ui_helpers.c
    ui_events.c
    ui_img_main_frame_png.c
    ui_img_gauge_png.c
    ui_img_top_body_png.c
    ui_img_temp_unit_png.c
    ui_img_nerdtronics_png.c
    ui_img_voltage_unit_png.c
    ui_img_battery_logo_png.c
    ui_img_temp_logo_png.c
    fonts/ui_font_Nico_Moji_24.c)

add_library(ui ${SOURCES})
