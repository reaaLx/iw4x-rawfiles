#define LOCAL_CLOSE_ALL \
	close "controls_multi"; \
	close "main_controls"; \
	close "main_options"; \
	close "options_control_defaults"; \
	close "options_graphics"; \
	close "options_graphics_defaults"; \
	close "options_graphics_texture"; \
	close "options_multi"; \
	close "options_voice"; \
	close "pc_options_actions"; \
	close "pc_options_advanced_video"; \
	close "pc_options_audio"; \
	close "pc_options_controls"; \
	close "pc_options_game"; \
	close "pc_options_gamepad"; \
	close "pc_options_look"; \
	close "pc_options_movement"; \
	close "pc_options_multi"; \
	close "pc_options_video"; \
	close "pc_options_voice";

#undef CHOICE_Y_START
#define CHOICE_Y_START 28

//iw4 stock
CHOICE_BUTTON( 0, "button_video",       "@MENU_VIDEO",          LOCAL_CLOSE_ALL open "pc_options_video" )
CHOICE_BUTTON( 1, "button_audio",       "@MENU_AUDIO",          LOCAL_CLOSE_ALL  open "pc_options_audio" )
CHOICE_BUTTON( 2, "button_controls",    "@MENU_CONTROLS",       LOCAL_CLOSE_ALL open "pc_options_controls" )

CHOICE_BUTTON( 3, "button_multi",       "@MENU_MULTIPLAYER",    LOCAL_CLOSE_ALL open "pc_options_multi" )
CHOICE_BUTTON( 4, "button_game",        "@MENU_GAME",           LOCAL_CLOSE_ALL open "pc_options_game" )
CHOICE_BUTTON( 5, "button_voice",       "@MENU_GAMEPAD",       LOCAL_CLOSE_ALL open "pc_options_gamepad" )

CHOICE_SEPARATOR( 6 )

CHOICE_BUTTON_EX( 6, "button_reset", "@MENU_RESET_SYSTEM_DEFAULTS", open "options_graphics_defaults";, disabled when ( ( ( dvarstring( "gameMode" ) == "so" && ( dvarbool( "cl_ingame" ) || dvarbool( "sv_running" ) || inlobby() ) ) || ( dvarstring( "gameMode" ) == "mp" && ( dvarbool( "cl_ingame" ) || dvarbool( "sv_running" ) || inlobby() ) ) ) ) )
