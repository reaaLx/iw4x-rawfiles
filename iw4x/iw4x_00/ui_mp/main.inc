#ifndef CHOICE_SIZE_X
#define CHOICE_SIZE_X				280
#endif

#ifndef CHOICE_SIZE_Y
#define CHOICE_SIZE_Y				20
#endif

#ifndef CHOICE_GROUP
#define CHOICE_GROUP 				""
#endif

#ifndef CHOICE_TEXTSIZE
#define CHOICE_TEXTSIZE				TEXTSIZE_SMALL
#endif

#ifndef CHOICE_TEXTFONT
#define CHOICE_TEXTFONT				3
#endif

#ifndef CHOICE_TEXTCOLOR
#define CHOICE_TEXTCOLOR 			1 1 1 1
#endif

#ifndef CHOICE_TEXTSTYLE
#define CHOICE_TEXTSTYLE			0
#endif

#ifndef CHOICE_STYLE
#define CHOICE_STYLE				1
#endif

#ifndef CHOICE_TEXTALIGN
#define	CHOICE_TEXTALIGN			ITEM_ALIGN_TOP_RIGHT
#endif

#ifndef CHOICE_TEXT_OFFSET_X
#define CHOICE_TEXT_OFFSET_X		-4
#endif

#ifndef CHOICE_TEXT_OFFSET_Y
#define CHOICE_TEXT_OFFSET_Y		0
#endif

#ifndef CHOICE_TEXTCOLOR_DISABLED
#define CHOICE_TEXTCOLOR_DISABLED   1 1 1 0.5
#endif

#ifndef CHOICE_BACKCOLOR
#define CHOICE_BACKCOLOR 			0 0 0 1
#endif

#ifndef CHOICE_TEXTCOLOR_CAPT
#define CHOICE_TEXTCOLOR_CAPT		CHOICE_TEXTCOLOR
#endif

#ifndef CHOICE_X_START
#define CHOICE_X_START				-64
#endif

#ifndef CHOICE_X_SPACING
#define CHOICE_X_SPACING			250
#endif

#ifndef CHOICE_Y_START
#define CHOICE_Y_START				82
#endif

#ifndef CHOICE_Y_SPACING
#define CHOICE_Y_SPACING			20
#endif

#ifndef CHOICE_Y_COUNT
#define CHOICE_Y_COUNT				20
#endif

#ifndef CHOICE_HORIZONTAL_ALIGN
#define CHOICE_HORIZONTAL_ALIGN 	HORIZONTAL_ALIGN_LEFT
#endif

#ifndef CHOICE_VERTICAL_ALIGN
#define CHOICE_VERTICAL_ALIGN 		VERTICAL_ALIGN_TOP
#endif

#ifndef CHOICE_FOCUS_SOUND
#define CHOICE_FOCUS_SOUND			"mouse_over"
#endif

#ifndef CHOICE_SEP_OFFSET_X
#define CHOICE_SEP_OFFSET_X			64
#endif

#ifndef CHOICE_SEP_OFFSET_Y
#define CHOICE_SEP_OFFSET_Y			0
#endif

#ifndef CHOICE_SEP_WIDTH
#define CHOICE_SEP_WIDTH			216
#endif

#ifndef CHOICE_SEP_SPACING
#define CHOICE_SEP_SPACING			0
#endif

#ifndef CHOICE_SEP_BACKGROUND
#define	CHOICE_SEP_BACKGROUND		"line_horizontal"
#endif

#ifndef HIGHTLIGHT_BACKCOLOR
#define HIGHTLIGHT_BACKCOLOR 		CHOICE_BACKCOLOR
#endif

#ifndef CHOICE_SEP_COLOR
#define CHOICE_SEP_COLOR			1 1 1 0.65
#endif

#ifndef NEW_X_OFFSET
#define NEW_X_OFFSET 0
#endif

#ifndef NEW_Y_OFFSET
#define NEW_Y_OFFSET 0
#endif

#ifndef NEWSTICKER_SPEED
#define NEWSTICKER_SPEED			20
#endif

#ifndef CHOICE_HIGHLIGHT
#define CHOICE_HIGHLIGHT			"menu_button_selection_bar"
#endif
		
#ifndef CHOICE_DVAR_TEXTALIGN
#define CHOICE_DVAR_TEXTALIGN		8
#endif

#ifndef CHOICE_DVAR_OFFSET_X
#define CHOICE_DVAR_OFFSET_X		225
#endif

#ifndef CHOICE_DVAR_OFFSET_Y
#define CHOICE_DVAR_OFFSET_Y		0
#endif

#ifndef CHOICE_GETFOCUSEDITEMY
#define CHOICE_GETFOCUSEDITEMY setLocalVarFloat "ui_popupYPos" ( getfocuseditemy( ) );
#endif

#ifndef CHOICE_UI_BUTTON
#define	CHOICE_UI_BUTTON "ui_menuAButton"
#endif

#define UI_TEXT_GLOWCOLOR_EX_SETUP \
glowColor 0 0 0 1 \
exp glowcolor r ( 0.25 * ( ( sin( milliseconds( ) / 150 ) * 0.5 + 0.5 ) * 0.5 + 0.5 ) ) \
exp glowcolor g ( 0.75 * ( ( sin( milliseconds( ) / 150 ) * 0.5 + 0.5 ) * 0.5 + 0.5 ) ) \
exp glowcolor b ( 0.25 * ( ( sin( milliseconds( ) / 150 ) * 0.5 + 0.5 ) * 0.5 + 0.5 ) )



#if !defined( CHOICE_SEP_1 ) || !defined( CHOICE_SEP_SPACING )
#define CHOICE_SEP_TOTAL_SPACING( itemIndex )	0

#elif !defined( CHOICE_SEP_2 )
#define CHOICE_SEP_TOTAL_SPACING( itemIndex )	( ( itemIndex <= CHOICE_SEP_1 ) ? 0 : CHOICE_SEP_SPACING )

#elif !defined( CHOICE_SEP_3 )
#define CHOICE_SEP_TOTAL_SPACING( itemIndex )	( ( itemIndex <= CHOICE_SEP_1 ) ? 0 : ( ( itemIndex <= CHOICE_SEP_2 ) ? CHOICE_SEP_SPACING : CHOICE_SEP_SPACING * 2 ) )

#else
#define CHOICE_SEP_TOTAL_SPACING( itemIndex )	( ( itemIndex <= CHOICE_SEP_1 ) ? 0 : ( ( itemIndex <= CHOICE_SEP_2 ) ? CHOICE_SEP_SPACING : ( ( itemIndex <= CHOICE_SEP_3 ) ? CHOICE_SEP_SPACING * 2 : CHOICE_SEP_SPACING * 3 ) ) )
#endif

#define CHOICE_ROW( itemIndex )		( ( itemIndex - 0 ) % CHOICE_Y_COUNT )
#define CHOICE_COL( itemIndex )		( ( itemIndex - 0 - ( ( itemIndex - 0 ) % CHOICE_Y_COUNT ) ) / CHOICE_Y_COUNT )

#define CHOICE_X( itemIndex ) 		( CHOICE_X_START + CHOICE_X_SPACING * CHOICE_COL( itemIndex ) )
#define CHOICE_Y( itemIndex ) 		( CHOICE_Y_START + CHOICE_Y_SPACING * CHOICE_ROW( itemIndex ) + CHOICE_SEP_TOTAL_SPACING( itemIndex ) )
#define CHOICE_ORIGIN( itemIndex )	CHOICE_X( itemIndex ) CHOICE_Y( itemIndex )
#define CHOICE_RECT( itemIndex )	CHOICE_ORIGIN( itemIndex ) CHOICE_SIZE_X CHOICE_SIZE_Y CHOICE_HORIZONTAL_ALIGN CHOICE_VERTICAL_ALIGN

// graphic settings stuff
#define ASPECT_RATIO_STRLIST { "@MENU_AUTO" 0 "@MENU_STANDARD_4_3" 1 "@MENU_WIDE_16_10" 2 "@MENU_WIDE_16_9" 3 }
#define AA_STRLIST { "@MENU_OFF" 1 "@MENU_2X" 2 "@MENU_4X" 4 }
#define DLIGHT_STRLIST { "@MENU_OFF" 0 "@MENU_LOW" 2 "@MENU_NORMAL" "4" }
#define ZFEATHER_STRLIST { "@MENU_NO" 0 "@MENU_YES" 1 }
#define MDL_DETAIL_STRLIST { "@MENU_NORMAL" 1 "@MENU_LOW" 2 }
#define WTR_DETAIL_STRLIST { "@MENU_NORMAL" 1 "@MENU_LOW" 0 }

// graphic textures stuff
#define TEXTURE_MM_STRLIST { "@MENU_AUTOMATIC" "Unchanged" "@MENU_BILINEAR" "Force Bilinear" "@MENU_TRILINEAR" "Force Trilinear" }
#define TEXTURE_QUALITY_STRLIST { "@MENU_AUTOMATIC" 0 "@MENU_MANUAL" 1 }
#define TEXTURE_RESOLUTION_STRLIST { "@MENU_LOW" 3 "@MENU_NORMAL" 2 "@MENU_HIGH" 1 "@MENU_EXTRA" 0 }

// sound stuff
#define SOUND_EQ_STRLIST { "@MENU_OFF" 0 "@MENU_ON" 1 }
#define SOUND_QUALITY_STRLIST { "@MENU_11KHZ" 11 "@MENU_22KHZ" 22 "@MENU_44KHZ" 44 }
#define SOUND_CONFIG_STRLIST { "@MENU_WINDOWS_DEFAULT"; "Windows Default"; "@MENU_MONO"; "Mono"; "@MENU_STEREO"; "Stereo"; "@MENU_FOUR_SPEAKERS"; "4 Speakers"; "@MENU_FIVE_ONE_SPEAKERS"; "5.1 Speakers"; }

// game options stuff
#define ENABLE_CONSOLE_STRLIST { "@MENU_YES" 0 "@MENU_NO" 1 }

// string list defined for buttons.
// 12/14 languages listed
#define LANG_STRLIST { "@MENU_ENGLISH" 0 "@MENU_FRENCH" 1 "@MENU_GERMAN" 2 "@MENU_ITALIAN" 3 "@MENU_SPANISH" 4 "@MENU_BRITISH" 5 "@MENU_RUSSIAN" 6 "@MENU_POLISH" 7 "@MENU_KOREAN" 8 "@MENU_TAIWANESE" 9 "@MENU_JAPANESE" 10 "@MENU_CHINESE" 11 "@MENU_THAI" 12 }

// Voice
#define VOICE_STRLIST { "@MENU_NO" 1 "@MENU_YES" 0 }

#define MENU_ON_OPEN(onOpenArg) \
		onOpen \
		{ \
			onOpenArg \
		}

#define MENU_ON_ESC(onESCArg) \
		onESC \
		{ \
			onESCArg \
		}

#define MENU_ON_CLOSE(onCloseArg) \
		onClose \
		{ \
			onCloseArg \
		}

#define MENU_EXEC_KEY(keyArg, execArg) \
		execKey keyArg\
		{ \
			play CHOICE_CLICK_SOUND; \
			execArg \
		}

#define MENU_EXEC_KEYINT(keyIntArg, execArg) \
		execKeyInt keyIntArg \
		{ \
			play CHOICE_CLICK_SOUND; \
			execArg \
		}

#define MENU_BACKGROUND_FRAME_DROP_SHADOW(posX, posY, width, height, imageArg) \
		itemDef \
		{ \
			rect posX posY width height HORIZONTAL_ALIGN_FULLSCREEN VERTICAL_ALIGN_TOP \
			style WINDOW_STYLE_SHADER \
			foreColor 0 0 0 1 \
			background imageArg \
			textScale 0.55 \
			decoration \
			visible 1 \
		}

#define MENU_BACKGROUND_FRAME \
		itemDef \
		{ \
			rect 0 28 640 356 4 1 \
			style WINDOW_STYLE_SHADER \
			foreColor 1 1 1 0.15 \
			background "white" \
			decoration \
			textScale 0.55 \
			visible 1 \
		} \	
		MENU_BACKGROUND_FRAME_DROP_SHADOW(-32, -4, 32, 32, "drop_shadow_tl") \
		MENU_BACKGROUND_FRAME_DROP_SHADOW(0, -4, 640, 32, "drop_shadow_t") \
		MENU_BACKGROUND_FRAME_DROP_SHADOW(640, -4, 32, 32, "drop_shadow_tr") \
		MENU_BACKGROUND_FRAME_DROP_SHADOW(640, 28, 32, 356, "drop_shadow_r") \
		MENU_BACKGROUND_FRAME_DROP_SHADOW(640, 384, 32, 32, "drop_shadow_br") \
		MENU_BACKGROUND_FRAME_DROP_SHADOW(0, 384, 640, 32, "drop_shadow_b") \
		MENU_BACKGROUND_FRAME_DROP_SHADOW(-32, 384, 32, 32, "drop_shadow_bl") \
		MENU_BACKGROUND_FRAME_DROP_SHADOW(-32, 28, 32, 356, "drop_shadow_l")

#ifndef MENU_BACKGROUND_PANEL_RIGHT_WIDTH
#define MENU_BACKGROUND_PANEL_RIGHT_WIDTH			292
#endif

#ifndef MENU_BACKGROUND_PANEL_RIGHT_HEIGHT
#define MENU_BACKGROUND_PANEL_RIGHT_HEIGHT			356
#endif

#define MENU_BACKGROUND_PANEL_RIGHT \
	itemDef \
	{ \
		rect ( 0 - MENU_BACKGROUND_PANEL_RIGHT_WIDTH ) 28 MENU_BACKGROUND_PANEL_RIGHT_WIDTH MENU_BACKGROUND_PANEL_RIGHT_HEIGHT HORIZONTAL_ALIGN_RIGHT VERTICAL_ALIGN_TOP \
		style WINDOW_STYLE_SHADER \
		foreColor 0 0 0 0.7 \
		background "black" \
		decoration \
		textScale 0.55 \
		visible 1 \
	} \
	itemDef \
	{ \
		name "image" \
		rect (0 - ( MENU_BACKGROUND_PANEL_RIGHT_WIDTH - 10 ) ) 50 (MENU_BACKGROUND_PANEL_RIGHT_WIDTH - 20) 127 HORIZONTAL_ALIGN_RIGHT VERTICAL_ALIGN_TOP \
		style WINDOW_STYLE_SHADER \
		foreColor 1 1 1 1 \
		decoration \
		textScale 0.55 \
		visible when(localvarstring( "ui_info_icon") != "") \
		exp material ( localvarstring( "ui_info_icon" )  ) \
	} \
	itemDef \
	{ \
		name "longname" \
		rect ( 0 - ( MENU_BACKGROUND_PANEL_RIGHT_WIDTH - 10 ) ) 28 (MENU_BACKGROUND_PANEL_RIGHT_WIDTH - 20) 22 HORIZONTAL_ALIGN_RIGHT VERTICAL_ALIGN_TOP \
		foreColor CHOICE_TEXTCOLOR \
		decoration \
		textAlign ITEM_ALIGN_TOP_LEFT \
		textScale CHOICE_TEXTSIZE \
		textFont 9 \
		visible 1 \
		exp text ( "@" + localvarstring( "ui_info_name" )  ) \
	} \
	itemDef \
	{ \
		name "description" \
		rect ( 0 - (MENU_BACKGROUND_PANEL_RIGHT_WIDTH - 10 ) ) 180 (MENU_BACKGROUND_PANEL_RIGHT_WIDTH - 20) 20 HORIZONTAL_ALIGN_RIGHT VERTICAL_ALIGN_TOP \
		foreColor 1 1 1 0.65 \
		decoration \
		autoWrapped \
		textAlign ITEM_ALIGN_TOP_LEFT \
		textScale CHOICE_TEXTSIZE \
		textFont UI_FONT_SMALL \
		visible 1 \
		exp text ( "@" + localvarstring( "ui_info_desc" )  ) \
	}


// used for custom highlights for itemDefs that are special and can not use itemIndex or complie with the strict alignment of this macro set
// for instance, pc_join_unranked menu.
#define CHOICE_HIGHLIGHT_CUSTOM_2( px, py, pw, ph, visArg ) \
		itemDef \
		{ \
			style 1 \
			rect ( px + ( ph / 4 ) ) py ( - ( pw - ( ph / 4 ) ) ) ph CHOICE_HORIZONTAL_ALIGN CHOICE_VERTICAL_ALIGN \
			background "white" \
			forecolor 1 1 1 1 \
			visible 1 \
			decoration \
		} \
		itemDef \
		{ \
			style 1 \
			rect ( px + ( ph / 4 ) ) py ( - ( pw - ( ph / 4 ) ) ) ph CHOICE_HORIZONTAL_ALIGN CHOICE_VERTICAL_ALIGN \
			background "white" \
			forecolor 1 1 1 1 \
			visible 1 \
			decoration \
		} \
		itemDef \
		{ \
			style 1 \
			rect ( px + ( ph / 4 ) ) py ( - ( pw - ( ph / 4 ) ) ) ph CHOICE_HORIZONTAL_ALIGN CHOICE_VERTICAL_ALIGN \
			background "white" \
			forecolor 1 1 1 1 \
			visible visArg \
			decoration \
		} \
		itemDef \
		{ \
			style 1 \
			rect ( px + ( ph / 4 ) ) py ( - ( pw - ( ph / 4 ) ) ) ph CHOICE_HORIZONTAL_ALIGN CHOICE_VERTICAL_ALIGN \
			background "white" \
			forecolor 1 1 1 1 \
			visible visArg \
			decoration \
		}
		
#define	CHOICE_NEWICON_VIS( itemIndex, visArg ) \
		itemDef \
		{ \
			style 3 \
			rect (CHOICE_X( itemIndex ) + CHOICE_SIZE_X + NEW_X_OFFSET ) (CHOICE_Y( itemIndex ) + 0 + NEW_Y_OFFSET ) (CHOICE_SIZE_Y * 2 ) CHOICE_SIZE_Y CHOICE_HORIZONTAL_ALIGN CHOICE_VERTICAL_ALIGN \
			exp material( "specialty_new" ) \
			visible visArg \
			textscale 0.55 \
			decoration \
		}
#define	CHOICE_LOCKEDICON_VIS( itemIndex, visArg ) \
		itemDef \
		{ \
			style 3 \
			rect (CHOICE_X( itemIndex ) + CHOICE_SIZE_X + NEW_X_OFFSET ) (CHOICE_Y( itemIndex ) + 0 + NEW_Y_OFFSET ) (CHOICE_SIZE_Y * 2 ) CHOICE_SIZE_Y CHOICE_HORIZONTAL_ALIGN CHOICE_VERTICAL_ALIGN \
			exp material( "specialty_locked" ) \
			visible visArg \
			textscale 0.55 \
			decoration \
		}
		
#define CHOICE_BUTTON( itemIndex, nameArg, textArg, actionArg ) \
		CHOICE_BUTTON_VIS( itemIndex, nameArg, textArg, actionArg, 1 )

#define CHOICE_BUTTON_NOHI( itemIndex, nameArg, textArg, actionArg ) \
		CHOICE_BUTTON_NOHI_VIS( itemIndex, nameArg, textArg, actionArg, 1 )

#define CHOICE_BUTTON_VIS( itemIndex, nameArg, textArg, actionArg, visArg ) \
		CHOICE_BUTTON_NOHI_VIS( itemIndex, nameArg, textArg, actionArg, visArg )

#define CHOICE_BUTTON_VIS_ADV( itemIndex, nameArg, textArg, actionArg, visArg, vis ) \
		CHOICE_BUTTON_NOHI_VIS( itemIndex, nameArg, textArg, actionArg, visArg )
	
#define CHOICE_BUTTON_NOHI_VIS( itemIndex, nameArg, textArg, actionArg, visArg ) \
		CHOICE_BUTTON_FOCUS_NOHI_VIS( itemIndex, nameArg, textArg, actionArg, ;, ;, visArg )

#define CHOICE_BUTTON_FOCUS( itemIndex, nameArg, textArg, actionArg, onFocusArg, leaveFocusArg ) \
		CHOICE_BUTTON_FOCUS_VIS( itemIndex, nameArg, textArg, actionArg, onFocusArg, leaveFocusArg, 1 )

#define CHOICE_BUTTON_FOCUS_NOHI( itemIndex, nameArg, textArg, actionArg, onFocusArg, leaveFocusArg ) \
		CHOICE_BUTTON_FOCUS_NOHI_VIS( itemIndex, nameArg, textArg, actionArg, onFocusArg, leaveFocusArg, 1 )

#define CHOICE_BUTTON_FOCUS_VIS( itemIndex, nameArg, textArg, actionArg, onFocusArg, leaveFocusArg, visArg ) \
		CHOICE_BUTTON_FOCUS_NOHI_VIS( itemIndex, nameArg, textArg, actionArg, onFocusArg, leaveFocusArg, visArg )

#define CHOICE_BUTTON_FOCUS_VIS_ADV( itemIndex, nameArg, textArg, actionArg, onFocusArg, leaveFocusArg, visArg, vis ) \
		CHOICE_BUTTON_FOCUS_NOHI_VIS( itemIndex, nameArg, textArg, actionArg, onFocusArg, leaveFocusArg, visArg )

#define CHOICE_BUTTON_FOCUS_NOHI_VIS( itemIndex, nameArg, textArg, actionArg, onFocusArg, leaveFocusArg, visArg ) \
		CHOICE_BUTTON_FOCUS_NOHI_VIS_EX( itemIndex, nameArg, textArg, actionArg, onFocusArg, leaveFocusArg, visArg, ; )

#define CHOICE_BUTTON_EX( itemIndex, nameArg, textArg, actionArg, extraArgs ) \
		CHOICE_BUTTON_FOCUS_NOHI_VIS_EX( itemIndex, nameArg, textArg, actionArg, ;, ;, 1, extraArgs )

#define CHOICE_BUTTON_EX_VIS( itemIndex, nameArg, textArg, actionArg, visArg, extraArgs ) \
		CHOICE_BUTTON_FOCUS_NOHI_VIS_EX( itemIndex, nameArg, textArg, actionArg, ;, ;, visArg, extraArgs )

#define CHOICE_BUTTON_FOCUS_EX( itemIndex, nameArg, textArg, actionArg, onFocusArg, leaveFocusArg, extraArgs ) \
		CHOICE_BUTTON_FOCUS_NOHI_VIS_EX( itemIndex, nameArg, textArg, actionArg, onFocusArg, leaveFocusArg, 1, extraArgs )

#define CHOICE_BUTTON_FOCUS_VIS_EX( itemIndex, nameArg, textArg, actionArg, onFocusArg, leaveFocusArg, visArg, extraArgs ) \
		CHOICE_BUTTON_FOCUS_NOHI_VIS_EX( itemIndex, nameArg, textArg, actionArg, onFocusArg, leaveFocusArg, visArg, extraArgs )

#define CHOICE_BUTTON_FOCUS_VIS_ADV_EX( itemIndex, nameArg, textArg, actionArg, onFocusArg, leaveFocusArg, visArg, extraArgs, vis ) \
		CHOICE_BUTTON_FOCUS_NOHI_VIS_EX( itemIndex, nameArg, textArg, actionArg, onFocusArg, leaveFocusArg, visArg, extraArgs )

#define CHOICE_BUTTON_FOCUS_NOHI_VIS_EX( itemIndex, nameArg, textArg, actionArg, onFocusArg, leaveFocusArg, visArg, extraArgs ) \
		CHOICE_SHADER( itemIndex, nameArg ) \
		itemDef \
		{ \
			name nameArg \
			rect CHOICE_RECT( itemIndex ) \
			forecolor CHOICE_TEXTCOLOR \
			disablecolor CHOICE_TEXTCOLOR_DISABLED \
			style CHOICE_STYLE \
			group "mw2_button" \
			type ITEM_TYPE_BUTTON \
			textAlign CHOICE_TEXTALIGN \
			textAlignX CHOICE_TEXT_OFFSET_X \
			textFont CHOICE_TEXTFONT \
			textScale CHOICE_TEXTSIZE \
			textStyle CHOICE_TEXTSTYLE \
			exp text( textArg ) \
			visible visArg \
			extraArgs \
			CHOICE_SCRIPTS_ALL( itemIndex, nameArg, actionArg, onFocusArg, leaveFocusArg ) \
		} \

#define CHOICE_SHADER( itemIndex, nameArg ) \
		itemDef \
		{ \
			forecolor 0 0 0 1 \
			style 3 \
			rect CHOICE_ORIGIN( itemIndex ) 336 20 CHOICE_HORIZONTAL_ALIGN CHOICE_VERTICAL_ALIGN \
			background CHOICE_HIGHLIGHT \
			visible when ( getfocuseditemname() == nameArg ) \
			decoration \
		}
		
#define CHOICE_DBUTTON_VIS( itemIndex, nameArg, textArg, disArg ) \
		CHOICE_SHADER( itemIndex, nameArg ) \
		itemDef \
		{ \
			name nameArg \
			rect CHOICE_RECT( itemIndex ) \
			forecolor CHOICE_TEXTCOLOR \
			disablecolor CHOICE_TEXTCOLOR_DISABLED \
			style CHOICE_STYLE \
			group "mw2_button" \
			type ITEM_TYPE_BUTTON \
			textAlign CHOICE_TEXTALIGN \
			textAlignX CHOICE_TEXT_OFFSET_X \
			textFont CHOICE_TEXTFONT \
			textScale CHOICE_TEXTSIZE \
			textStyle CHOICE_TEXTSTYLE \
			text textArg \
			disabled disArg \
			CHOICE_SCRIPTS_ACTION( itemIndex, nameArg, actionArg ) \
		}

#define CHOICE_DBUTTON_NOHI_VIS( itemIndex, nameArg, textArg, disArg ) \
		CHOICE_SHADER( itemIndex, nameArg ) \
		itemDef \
		{ \
			name nameArg \
			rect CHOICE_RECT( itemIndex ) \
			forecolor CHOICE_TEXTCOLOR \
			disablecolor CHOICE_TEXTCOLOR_DISABLED \
			style CHOICE_STYLE \
			group "mw2_button" \
			type ITEM_TYPE_BUTTON \
			textAlign CHOICE_TEXTALIGN \
			textAlignX CHOICE_TEXT_OFFSET_X \
			textFont CHOICE_TEXTFONT \
			textScale CHOICE_TEXTSIZE \
			textStyle CHOICE_TEXTSTYLE \
			exp text( textArg ) \
			disabled disArg \
			CHOICE_SCRIPTS_ACTION( itemIndex, nameArg, actionArg ) \
		}
		
#define CHOICE_DBUTTON_FOCUS_VIS( itemIndex, nameArg, textArg, onFocusArg, leaveFocusArg, disArg ) \
		CHOICE_SHADER( itemIndex, nameArg ) \
		itemDef \
		{ \
			name nameArg \
			rect CHOICE_RECT( itemIndex ) \
			forecolor CHOICE_TEXTCOLOR \
			disablecolor CHOICE_TEXTCOLOR_DISABLED \
			style CHOICE_STYLE \
			group "mw2_button" \
			type ITEM_TYPE_BUTTON \
			textAlign CHOICE_TEXTALIGN \
			textAlignX CHOICE_TEXT_OFFSET_X \
			textFont CHOICE_TEXTFONT \
			textScale CHOICE_TEXTSIZE \
			textStyle CHOICE_TEXTSTYLE \
			exp text( textArg ) \
			disabled disArg \
			visible 1 \
			CHOICE_SCRIPTS_ALL( itemIndex, actionArg, onFocusArg, onFocusArg, leaveFocusArg ) \
		}		
#define CHOICE_BUTTON_ADV( itemIndex, nameArg, textArg, bgArg, actionArg ) \
		CHOICE_BUTTON_ADV_VIS( itemIndex, nameArg, textArg, bgArg, actionArg, 1 )

#define CHOICE_BUTTON_ADV_VIS( itemIndex, nameArg, textArg, bgArg, actionArg, visArg ) \
		CHOICE_BUTTON_ADV_EX_VIS( itemIndex, nameArg, textArg, bgArg, actionArg, visArg, ; )

#define CHOICE_BUTTON_ADV_EX( itemIndex, nameArg, textArg, bgArg, actionArg, extraArg ) \
		CHOICE_BUTTON_ADV_EX_VIS( itemIndex, nameArg, textArg, bgArg, actionArg, 1, extraArg )

#define CHOICE_BUTTON_ADV_EX_VIS( itemIndex, nameArg, textArg, bgArg, actionArg, visArg, extraArg ) \
		CHOICE_SHADER( itemIndex, nameArg ) \
		itemDef \
		{ \
			name nameArg \
			rect CHOICE_ORIGIN( itemIndex ) ( CHOICE_SIZE_X + 50 ) CHOICE_SIZE_Y CHOICE_HORIZONTAL_ALIGN CHOICE_VERTICAL_ALIGN \
			forecolor CHOICE_TEXTCOLOR \
			disablecolor CHOICE_TEXTCOLOR_DISABLED \
			style CHOICE_STYLE \
			background bgArg \
			group "mw2_button" \
			type ITEM_TYPE_BUTTON \
			textAlign 8 \
			textAlignX 170 \
			textFont CHOICE_TEXTFONT \
			textScale CHOICE_TEXTSIZE \
			textStyle CHOICE_TEXTSTYLE \
			text textArg \
			visible visArg \
			extraArg \
			CHOICE_SCRIPTS_ACTION( itemIndex, nameArg, actionArg ) \
		}

#define CHOICE_DBUTTON_ADV_VIS( itemIndex, textArg, bgArg, actionArg, visArg ) \
		CHOICE_SHADER( itemIndex, nameArg ) \
		itemDef \
		{ \
			name nameArg \
			rect CHOICE_ORIGIN( itemIndex ) ( CHOICE_SIZE_X + 50 ) CHOICE_SIZE_Y CHOICE_HORIZONTAL_ALIGN CHOICE_VERTICAL_ALIGN \
			forecolor CHOICE_TEXTCOLOR \
			disablecolor CHOICE_TEXTCOLOR_DISABLED \
			style CHOICE_STYLE \
			background bgArg \
			group "mw2_button" \
			type ITEM_TYPE_BUTTON \
			textAlign CHOICE_DVAR_TEXTALIGN \
			textAlignX CHOICE_DVAR_OFFSET_X \
			textAlignY CHOICE_DVAR_OFFSET_Y \
			textScale CHOICE_TEXTSIZE \
			textStyle CHOICE_TEXTSTYLE \
			textFont CHOICE_TEXTFONT \
			text textArg \
			visible visArg \
			CHOICE_SCRIPTS_ACTION( itemIndex, nameArg, actionArg ) \
		}
#define CHOICE_DVARENUMLIST( itemIndex, nameArg, textArg, dvarArg, dvarListArg, actionArg ) \
		CHOICE_DVARLIST_VIS( itemIndex, nameArg, textArg, dvarArg, ITEM_TYPE_DVARENUM, dvarEnumList dvarListArg, actionArg, 1 )

#define CHOICE_DVARENUMLIST_VIS( itemIndex, nameArg, textArg, dvarArg, dvarListArg, actionArg, visArg ) \
		CHOICE_DVARLIST_VIS( itemIndex, nameArg, textArg, dvarArg, ITEM_TYPE_DVARENUM, dvarEnumList dvarListArg, actionArg, visArg )

#define CHOICE_DVARSTRINGLIST( itemIndex, nameArg, textArg, dvarArg, strListArg, actionArg ) \
		CHOICE_DVARLIST_VIS( itemIndex, nameArg, textArg, dvarArg, ITEM_TYPE_MULTI, dvarStrList strListArg, actionArg, 1 )

#define CHOICE_DVARSTRINGLIST_VIS( itemIndex, nameArg, textArg, dvarArg, strListArg, actionArg, visArg ) \
		CHOICE_DVARLIST_VIS( itemIndex, nameArg, textArg, dvarArg, ITEM_TYPE_MULTI, dvarStrList strListArg, actionArg, visArg )

#define CHOICE_DVARFLOATLIST( itemIndex, nameArg, textArg, dvarArg, strListArg, actionArg ) \
		CHOICE_DVARLIST_VIS( itemIndex, nameArg, textArg, dvarArg, ITEM_TYPE_MULTI, dvarFloatList strListArg, actionArg, 1 )

#define CHOICE_DVARFLOATLIST_VIS( itemIndex, nameArg, textArg, dvarArg, strListArg, actionArg, visArg ) \
		CHOICE_DVARLIST_VIS( itemIndex, nameArg, textArg, dvarArg, ITEM_TYPE_MULTI, dvarFloatList strListArg, actionArg, visArg )

#define CHOICE_DVARENUMLIST_FOCUS( itemIndex, nameArg, textArg, dvarArg, dvarListArg, actionArg, onFocusArg, leaveFocusArg ) \
		CHOICE_DVARLIST_FOCUS_VIS( itemIndex, nameArg, textArg, dvarArg, ITEM_TYPE_DVARENUM, dvarEnumList dvarListArg, actionArg, onFocusArg, leaveFocusArg, 1 )

#define CHOICE_DVARENUMLIST_FOCUS_VIS( itemIndex, nameArg, textArg, dvarArg, dvarListArg, actionArg, onFocusArg, leaveFocusArg, visArg ) \
		CHOICE_DVARLIST_FOCUS_VIS( itemIndex, nameArg, textArg, dvarArg, ITEM_TYPE_MULTI, dvarFloatList strListArg, actionArg, onFocusArg, leaveFocusArg, visArg )

#define CHOICE_DVARSTRINGLIST_FOCUS( itemIndex, nameArg, textArg, dvarArg, dvarListArg, actionArg, onFocusArg, leaveFocusArg ) \
		CHOICE_DVARLIST_FOCUS_VIS( itemIndex, nameArg, textArg, dvarArg, ITEM_TYPE_MULTI, dvarStrList strListArg, actionArg, onFocusArg, leaveFocusArg, 1 )

#define CHOICE_DVARSTRINGLIST_FOCUS_VIS( itemIndex, nameArg, textArg, dvarArg, strListArg, actionArg, onFocusArg, leaveFocusArg, visArg ) \
		CHOICE_DVARLIST_FOCUS_VIS( itemIndex, nameArg, textArg, dvarArg, ITEM_TYPE_MULTI, dvarFloatList strListArg, actionArg, onFocusArg, leaveFocusArg, visArg )

#define CHOICE_DVARFLOATLIST_FOCUS( itemIndex, nameArg, textArg, dvarArg, dvarListArg, actionArg, onFocusArg, leaveFocusArg ) \
		CHOICE_DVARLIST_FOCUS_VIS( itemIndex, nameArg, textArg, dvarArg, ITEM_TYPE_MULTI, dvarFloatList strListArg, actionArg, onFocusArg, leaveFocusArg, 1 )

#define CHOICE_DVARFLOATLIST_FOCUS_VIS( itemIndex, nameArg, textArg, dvarArg, strListArg, actionArg, onFocusArg, leaveFocusArg, visArg ) \
		CHOICE_DVARLIST_FOCUS_VIS( itemIndex, nameArg, textArg, dvarArg, ITEM_TYPE_MULTI, dvarFloatList strListArg, actionArg, onFocusArg, leaveFocusArg, visArg )
		
#define CHOICE_DVARENUMLIST_EX( itemIndex, nameArg, textArg, dvarArg, dvarListArg, actionArg, extraArg ) \
		CHOICE_DVARLIST_EX_VIS( itemIndex, nameArg, textArg, dvarArg, ITEM_TYPE_DVARENUM, dvarEnumList dvarListArg, actionArg, 1, extraArg )

#define CHOICE_DVARENUMLIST_EX_VIS( itemIndex, nameArg, textArg, dvarArg, dvarListArg, actionArg, visArg, extraArg ) \
		CHOICE_DVARLIST_EX_VIS( itemIndex, nameArg, textArg, dvarArg, ITEM_TYPE_DVARENUM, dvarEnumList dvarListArg, actionArg, visArg, extraArg )

#define CHOICE_DVARSTRINGLIST_EX( itemIndex, nameArg, textArg, dvarArg, strListArg, actionArg, extraArg ) \
		CHOICE_DVARLIST_EX_VIS( itemIndex, nameArg, textArg, dvarArg, ITEM_TYPE_MULTI, dvarStrList strListArg, actionArg, 1, extraArg )

#define CHOICE_DVARSTRINGLIST_EX_VIS( itemIndex, nameArg, textArg, dvarArg, strListArg, actionArg, visArg, extraArg ) \
		CHOICE_DVARLIST_EX_VIS( itemIndex, nameArg, textArg, dvarArg, ITEM_TYPE_MULTI, dvarStrList strListArg, actionArg, visArg, extraArg )

#define CHOICE_DVARFLOATLIST_EX( itemIndex, nameArg, textArg, dvarArg, strListArg, actionArg, extraArg ) \
		CHOICE_DVARLIST_EX_VIS( itemIndex, nameArg, textArg, dvarArg, ITEM_TYPE_MULTI, dvarFloatList strListArg, actionArg, 1, extraArg )

#define CHOICE_DVARFLOATLIST_EX_VIS( itemIndex, nameArg, textArg, dvarArg, strListArg, actionArg, visArg, extraArg ) \
		CHOICE_DVARLIST_EX_VIS( itemIndex, nameArg, textArg, dvarArg, ITEM_TYPE_MULTI, dvarFloatList strListArg, actionArg, visArg, extraArg )

#define CHOICE_DVARENUMLIST_FOCUS_EX( itemIndex, nameArg, textArg, dvarArg, dvarListArg, actionArg, onFocusArg, leaveFocusArg, extraArg ) \
		CHOICE_DVARLIST_FOCUS_EX_VIS( itemIndex, nameArg, textArg, dvarArg, ITEM_TYPE_DVARENUM, dvarEnumList dvarListArg, actionArg, onFocusArg, leaveFocusArg, 1, extraArg )

#define CHOICE_DVARENUMLIST_FOCUS_EX_VIS( itemIndex, nameArg, textArg, dvarArg, dvarListArg, actionArg, onFocusArg, leaveFocusArg, visArg, extraArg ) \
		CHOICE_DVARLIST_FOCUS_EX_VIS( itemIndex, nameArg, textArg, dvarArg, ITEM_TYPE_DVARENUM, dvarEnumList dvarListArg, actionArg, onFocusArg, leaveFocusArg, visArg, extraArg )

#define CHOICE_DVARSTRINGLIST_FOCUS_EX( itemIndex, nameArg, textArg, dvarArg, strListArg, actionArg, onFocusArg, leaveFocusArg, extraArg ) \
		CHOICE_DVARLIST_FOCUS_EX_VIS( itemIndex, nameArg, textArg, dvarArg, ITEM_TYPE_MULTI, dvarStrList strListArg, actionArg, onFocusArg, leaveFocusArg, 1, extraArg )

#define CHOICE_DVARSTRINGLIST_FOCUS_EX_VIS( itemIndex, nameArg, textArg, dvarArg, strListArg, actionArg, onFocusArg, leaveFocusArg, visArg, extraArg ) \
		CHOICE_DVARLIST_FOCUS_EX_VIS( itemIndex, nameArg, textArg, dvarArg, ITEM_TYPE_MULTI, dvarStrList strListArg, actionArg, onFocusArg, leaveFocusArg, visArg, extraArg )

#define CHOICE_DVARFLOATLIST_FOCUS_EX( itemIndex, nameArg, textArg, dvarArg, strListArg, actionArg, onFocusArg, leaveFocusArg, extraArg ) \
		CHOICE_DVARLIST_FOCUS_EX_VIS( itemIndex, nameArg, textArg, dvarArg, ITEM_TYPE_MULTI, dvarFloatList strListArg, actionArg, onFocusArg, leaveFocusArg, 1, extraArg )

#define CHOICE_DVARFLOATLIST_FOCUS_EX_VIS( itemIndex, nameArg, textArg, dvarArg, strListArg, actionArg, onFocusArg, leaveFocusArg, visArg, extraArg ) \
		CHOICE_DVARLIST_FOCUS_EX_VIS( itemIndex, nameArg, textArg, dvarArg, ITEM_TYPE_MULTI, dvarFloatList strListArg, actionArg, onFocusArg, leaveFocusArg, visArg, extraArg )

#define CHOICE_DVARLIST_EX_VIS( itemIndex, nameArg, textArg, dvarArg, listTypeArg, listArg, actionArg, visArg, extraArg ) \
		CHOICE_DVARLIST_FOCUS_EX_VIS( itemIndex, nameArg, textArg, dvarArg, listTypeArg, listArg, actionArg, ;, ;, visArg, extraArg )
		
#define CHOICE_DVARLIST_VIS( itemIndex, nameArg, textArg, dvarArg, listTypeArg, listArg, actionArg, visArg ) \
		CHOICE_DVARLIST_FOCUS_EX_VIS( itemIndex, nameArg, textArg, dvarArg, listTypeArg, listArg, actionArg, ;, ;, visArg, ; )
		
#define CHOICE_DVARLIST_FOCUS_VIS( itemIndex, nameArg, textArg, dvarArg, listTypeArg, listArg, actionArg, onFocusArg, leaveFocusArg, visArg ) \
		CHOICE_DVARLIST_FOCUS_EX_VIS( itemIndex, nameArg, textArg, dvarArg, listTypeArg, listArg, actionArg, onFocusArg, leaveFocusArg, visArg, ; )

#define CHOICE_DVARLIST_FOCUS_EX_VIS( itemIndex, nameArg, textArg, dvarArg, listTypeArg, listArg, actionArg, onFocusArg, leaveFocusArg, visArg, extraArg ) \
		CHOICE_SHADER( itemIndex, nameArg ) \
		itemDef \
		{ \
			name nameArg \
			rect CHOICE_ORIGIN( itemIndex ) ( CHOICE_SIZE_X + 50 ) CHOICE_SIZE_Y CHOICE_HORIZONTAL_ALIGN CHOICE_VERTICAL_ALIGN \
			foreColor CHOICE_TEXTCOLOR  \
			disableColor CHOICE_TEXTCOLOR_DISABLED \
			style CHOICE_STYLE \
			group "mw2_button" \
			type listTypeArg \
			dvar dvarArg \
			listArg \
			textAlign CHOICE_DVAR_TEXTALIGN \
			textAlignX CHOICE_DVAR_OFFSET_X \
			textAlignY CHOICE_DVAR_OFFSET_Y \
			textScale CHOICE_TEXTSIZE \
			textStyle CHOICE_TEXTSTYLE \
			textFont CHOICE_TEXTFONT \
			exp text ( dvarString( dvarArg ) ) \
			visible visArg \
			extraArg \
			CHOICE_SCRIPTS_ALL( itemIndex, nameArg, actionArg, onFocusArg; CHOICE_GETFOCUSEDITEMY, leaveFocusArg ) \
		} \
		CHOICE_CAPTION_VIS( itemIndex, textArg, visArg )

#define CHOICE_DVARSLIDER( itemIndex, nameArg, textArg, dvarArg, defaultArg, minArg, maxArg, actionArg ) \
		CHOICE_DVARSLIDER_VIS( itemIndex, nameArg, textArg, dvarArg, defaultArg, minArg, maxArg, actionArg, 1 )
		
#define CHOICE_DVARSLIDER_VIS( itemIndex, nameArg, textArg, dvarArg, defaultArg, minArg, maxArg, actionArg, visArg ) \
		CHOICE_DVARSLIDER_FOCUS_VIS( itemIndex, nameArg, textArg, dvarArg, defaultArg, minArg, maxArg, actionArg, ;, ;, 1 )
		
#define CHOICE_DVARSLIDER_FOCUS( itemIndex, nameArg, textArg, dvarArg, defaultArg, minArg, maxArg, actionArg, onFocusArg, leaveFocusArg ) \
		CHOICE_DVARSLIDER_FOCUS_VIS( itemIndex, nameArg, textArg, dvarArg, defaultArg, minArg, maxArg, actionArg, onFocusArg, leaveFocusArg, 1 )

#define CHOICE_DVARSLIDER_EX( itemIndex, nameArg, textArg, dvarArg, defaultArg, minArg, maxArg, actionArg, extraArgs ) \
		CHOICE_DVARSLIDER_FOCUS_EX_VIS( itemIndex, nameArg, textArg, dvarArg, defaultArg, minArg, maxArg, actionArg, ;, ;, 1, extraArgs )

#define CHOICE_DVARSLIDER_EX_VIS( itemIndex, nameArg, textArg, dvarArg, defaultArg, minArg, maxArg, actionArg, visArg, extraArgs ) \
		CHOICE_DVARSLIDER_FOCUS_EX_VIS( itemIndex, nameArg, textArg, dvarArg, defaultArg, minArg, maxArg, actionArg, ;, ;, visArg, extraArgs )

#define CHOICE_DVARSLIDER_FOCUS_VIS( itemIndex, nameArg, textArg, dvarArg, defaultArg, minArg, maxArg, actionArg, onFocusArg, leaveFocusArg, visArg ) \
		CHOICE_DVARSLIDER_FOCUS_EX_VIS( itemIndex, nameArg, textArg, dvarArg, defaultArg, minArg, maxArg, actionArg, onFocusArg, leaveFocusArg, 1, ; )

#define CHOICE_DVARSLIDER_FOCUS_EX_VIS( itemIndex, nameArg, textArg, dvarArg, defaultArg, minArg, maxArg, actionArg, onFocusArg, leaveFocusArg, visArg, extraArg ) \
		itemDef \
		{ \
			name nameArg \
			rect CHOICE_ORIGIN( itemIndex ) (CHOICE_SIZE_X + 50 ) CHOICE_SIZE_Y CHOICE_HORIZONTAL_ALIGN CHOICE_VERTICAL_ALIGN \
			foreColor CHOICE_TEXTCOLOR \
			disableColor CHOICE_TEXTCOLOR_DISABLED \
			type ITEM_TYPE_SLIDER \
			textAlign CHOICE_DVAR_TEXTALIGN \
			textAlignX CHOICE_DVAR_OFFSET_X \
			textAlignY CHOICE_DVAR_OFFSET_Y \
			textScale CHOICE_TEXTSIZE \
			textStyle CHOICE_TEXTSTYLE \
			textFont CHOICE_TEXTFONT \
			exp text ( textArg ) \
			dvarFloat dvarArg defaultArg minArg maxArg \
			visible visArg \
			extraArg \
			CHOICE_SCRIPTS_ALL( itemIndex, nameArg, actionArg, onFocusArg; CHOICE_GETFOCUSEDITEMY, leaveFocusArg ) \
		} \
		CHOICE_CAPTION_VIS( itemIndex, textArg, visArg )		

#define CHOICE_DVARYESNO( itemIndex, nameArg, textArg, dvarArg, actionArg ) \
		CHOICE_DVARYESNO_VIS( itemIndex, nameArg, textArg, dvarArg, actionArg, 1 )
		
#define CHOICE_DVARYESNO_VIS( itemIndex, nameArg, textArg, dvarArg, actionArg, visArg ) \
		CHOICE_DVARYESNO_FOCUS_VIS( itemIndex, nameArg, textArg, dvarArg, actionArg, ;, ;, 1 )
		
#define CHOICE_DVARYESNO_FOCUS( itemIndex, nameArg, textArg, dvarArg, actionArg, onFocusArg, leaveFocusArg ) \
		CHOICE_DVARYESNO_FOCUS_VIS( itemIndex, nameArg, textArg, dvarArg, actionArg, onFocusArg, leaveFocusArg, 1 )

#define CHOICE_DVARYESNO_EX( itemIndex, nameArg, textArg, dvarArg, actionArg, extraArgs ) \
		CHOICE_DVARYESNO_FOCUS_EX_VIS( itemIndex, nameArg, textArg, dvarArg, actionArg, ;, ;, 1, extraArgs )

#define CHOICE_DVARYESNO_EX_VIS( itemIndex, nameArg, textArg, dvarArg, actionArg, visArg, extraArgs ) \
		CHOICE_DVARYESNO_FOCUS_EX_VIS( itemIndex, nameArg, textArg, dvarArg, actionArg, ;, ;, visArg, extraArgs )

#define CHOICE_DVARYESNO_FOCUS_VIS( itemIndex, nameArg, textArg, dvarArg, actionArg, onFocusArg, leaveFocusArg, visArg ) \
		CHOICE_DVARYESNO_FOCUS_EX_VIS( itemIndex, nameArg, textArg, dvarArg, actionArg, onFocusArg, leaveFocusArg, 1, ; )

#define CHOICE_DVARYESNO_FOCUS_EX_VIS( itemIndex, nameArg, textArg, dvarArg, actionArg, onFocusArg, leaveFocusArg, visArg, extraArg ) \
		CHOICE_SHADER( itemIndex, nameArg ) \
		itemDef \
		{ \
			name nameArg \
			rect CHOICE_ORIGIN( itemIndex ) ( CHOICE_SIZE_X + 50 ) CHOICE_SIZE_Y CHOICE_HORIZONTAL_ALIGN CHOICE_VERTICAL_ALIGN \
			forecolor CHOICE_TEXTCOLOR \
			disableColor CHOICE_TEXTCOLOR_DISABLED \
			style CHOICE_STYLE \
			group "mw2_button" \
			type ITEM_TYPE_YESNO \
			textAlign CHOICE_DVAR_TEXTALIGN \
			textAlignX CHOICE_DVAR_OFFSET_X \
			textAlignY CHOICE_DVAR_OFFSET_Y \
			textScale CHOICE_TEXTSIZE \
			textStyle CHOICE_TEXTSTYLE \
			textFont CHOICE_TEXTFONT \
			exp text ( textArg ) \
			dvar dvarArg \
			visible visArg \
			extraArg \
			CHOICE_SCRIPTS_ALL( itemIndex, nameArg, actionArg, onFocusArg; CHOICE_GETFOCUSEDITEMY, leaveFocusArg ) \
		} \
		CHOICE_CAPTION_VIS( itemIndex, textArg, visArg )

#define CHOICE_BIND( itemIndex, nameArg, textArg, dvarArg, actionArg ) \
		CHOICE_BIND_VIS( itemIndex, nameArg, textArg, dvarArg, actionArg, 1 )

#define CHOICE_BIND_VIS( itemIndex, nameArg, textArg, dvarArg, actionArg, visArg ) \
		CHOICE_SHADER( itemIndex, nameArg ) \
		itemDef \
		{ \
			name nameArg \
			rect CHOICE_ORIGIN( itemIndex ) ( CHOICE_SIZE_X + 50 ) CHOICE_SIZE_Y CHOICE_HORIZONTAL_ALIGN CHOICE_VERTICAL_ALIGN \
			foreColor CHOICE_TEXTCOLOR \
			style CHOICE_STYLE \
			type ITEM_TYPE_BIND \
			textAlign CHOICE_DVAR_TEXTALIGN \
			textAlignX CHOICE_DVAR_OFFSET_X \
			textAlignY CHOICE_DVAR_OFFSET_Y \
			textScale CHOICE_TEXTSIZE \
			textStyle CHOICE_TEXTSTYLE \
			textFont CHOICE_TEXTFONT \
			exp text ( textArg ) \
			dvar dvarArg \
			visible visArg \
			CHOICE_SCRIPTS_ALL( itemIndex, nameArg, actionArg, show "keyBindStatus", hide "keyBindStatus" ) \
		} \
		CHOICE_CAPTION_VIS( itemIndex, textArg, visArg )

#define CHOICE_DVAREDIT( itemIndex, nameArg, textArg, dvarArg, maxCharsArg, actionArg ) \
		CHOICE_DVAREDIT_VIS( itemIndex, nameArg, textArg, dvarArg, maxCharsArg, actionArg, 1 )
		
#define CHOICE_DVAREDIT_VIS( itemIndex, nameArg, textArg, dvarArg, maxCharsArg, actionArg, visArg ) \
		itemDef \
		{ \
			name nameArg \
			rect CHOICE_ORIGIN( itemIndex ) ( CHOICE_SIZE_X + 50 ) CHOICE_SIZE_Y CHOICE_HORIZONTAL_ALIGN CHOICE_VERTICAL_ALIGN \
			foreColor CHOICE_TEXTCOLOR \
			style CHOICE_STYLE \
			group "mw2_button" \
			type ITEM_TYPE_EDITFIELD \
			textAlign CHOICE_DVAR_TEXTALIGN \
			textAlignX 216 \
			textAlignY CHOICE_DVAR_OFFSET_Y \
			textScale CHOICE_TEXTSIZE \
			textStyle CHOICE_TEXTSTYLE \
			textFont CHOICE_TEXTFONT \
			text " " \
			dvar dvarArg \
			maxChars maxCharsArg \
			maxPaintChars maxCharsArg \
			visible visArg \
			CHOICE_SCRIPTS_ACTION( itemIndex, nameArg, actionArg ) \
		} \
		CHOICE_CAPTION_VIS( itemIndex, textArg, visArg )

#define CHOICE_DVAREDIT_NUMERIC( itemIndex, nameArg, textArg, dvarArg, max_chars, actionArg ) \
		CHOICE_DVAREDIT_NUMERIC_VIS( itemIndex, nameArg, textArg, dvarArg, max_chars, actionArg, 1 )

#define CHOICE_DVAREDIT_NUMERIC_VIS( itemIndex, nameArg, textArg, dvarArg, max_chars, actionArg, visArg ) \
		itemDef \
		{ \
			name nameArg \
			type ITEM_TYPE_NUMERICFIELD \
			text " " \
			dvar dvarArg \
			rect CHOICE_ORIGIN( itemIndex ) (CHOICE_SIZE_X + 50 ) CHOICE_SIZE_Y CHOICE_HORIZONTAL_ALIGN CHOICE_VERTICAL_ALIGN \
			textAlign CHOICE_DVAR_TEXTALIGN \
			textAlignX CHOICE_DVAR_OFFSET_X \
			textAlignY CHOICE_DVAR_OFFSET_Y \
			textStyle CHOICE_TEXTSTYLE \
			textScale CHOICE_TEXTSIZE \
			style CHOICE_STYLE \
			foreColor CHOICE_TEXTCOLOR \
			visible visArg \
			maxChars max_chars \
			CHOICE_SCRIPTS_ACTION( itemIndex, nameArg, actionArg ) \
		} \
		CHOICE_CAPTION_VIS( itemIndex, nameArg, textArg, visArg )

#define CHOICE_MENU_TITLE( titleArg, rectArg ) \
		CHOICE_MENU_TITLE_VIS( titleArg, rectArg, 1 )

#define CHOICE_MENU_TITLE_VIS( titleArg, rectArg, visArg ) \
		itemDef \
		{ \
			rect -56 (rectArg) 272 28 HORIZONTAL_ALIGN_LEFT VERTICAL_ALIGN_TOP \
			foreColor 1 1 1 1 \
			decoration \
			textAlign 6 \
			textAlignX -6 \
			textScale TEXTSIZE_TITLE \
			textStyle CHOICE_TEXTSTYLE \
			textFont 9 \
			exp text (titleArg) \
			visible visArg \
		}
		
// iw3 definition
#define CHOICE_MENU_TITLE_LEGACY( titleArg ) \
		itemDef \
		{ \
			type ITEM_TYPE_TEXT \
			origin ORIGIN_TITLE \
			foreColor CHOICE_TEXTCOLOR \
			textAlign ITEM_ALIGN_TOP_RIGHT \
			textAlignX TITLE_X_OFFSET \
			textAlignY TITLE_Y_OFFSET \
			textScale TEXTSIZE_TITLE \
			textStyle CHOICE_TEXTSTYLE \
			textFont 9 \
			exp text ( titleArg ) \
			visible 1 \
			decoration \
		}
		
#define CHOICE_SECTION_TITLE( itemIndex, titleArg ) \
		CHOICE_SECTION_TITLE_VIS( itemIndex, titleArg, 1 )	

#define CHOICE_SECTION_TITLE_VIS( itemIndex, titleArg, visArg ) \
		itemDef \
		{ \
			rect 232 0 344 28 CHOICE_HORIZONTAL_ALIGN CHOICE_VERTICAL_ALIGN \
			forecolor CHOICE_TEXTCOLOR \
			exp text( titleArg ) \
			textFont 9 \
			textScale TEXTSIZE_TITLE \
			textStyle CHOICE_TEXTSTYLE \
			textAlign 5 \
			visible visArg \
			decoration \
		}

#define CHOICE_SECTION_SEPARATOR( itemIndex ) \
		CHOICE_SECTION_SEPARATOR_VIS( itemIndex, 1 )

#define CHOICE_SECTION_SEPARATOR_VIS( itemIndex, visArg ) \	
		itemDef \
		{ \
			rect ( 0 + 75 ) 0 240 1 CHOICE_HORIZONTAL_ALIGN CHOICE_VERTICAL_ALIGN \
			origin CHOICE_ORIGIN( itemIndex ) \
			background CHOICE_SEP_BACKGROUND \
			foreColor CHOICE_SEP_COLOR \
			style 3 \
			visible visArg \
			decoration \
		}

#define CHOICE_SEPARATOR( afterItemIndex ) \
		CHOICE_SEPARATOR_VIS( afterItemIndex, 1 )
		
#define CHOICE_SEPARATOR_VIS( afterItemIndex, visArg ) \
		itemDef \
		{ \
			style WINDOW_STYLE_SHADER \
			rect ( CHOICE_SEP_OFFSET_X ) ( CHOICE_Y_SPACING + CHOICE_SEP_SPACING / 2 + CHOICE_SEP_OFFSET_Y - 20 ) CHOICE_SEP_WIDTH 1 CHOICE_HORIZONTAL_ALIGN CHOICE_VERTICAL_ALIGN \
			origin CHOICE_ORIGIN( afterItemIndex ) \
			background "gradient_fadein" \
			foreColor CHOICE_SEP_COLOR \
			textScale 0.55 \
			visible visArg \
			decoration \
		}

#define CHOICE_CAPTION( itemIndex, textArg ) \
		CHOICE_CAPTION_VIS( itemIndex, textArg, 1 )

#define CHOICE_CAPTION_COLOR( itemIndex, textArg, colorArg ) \
		CHOICE_CAPTION_COLOR_VIS( itemIndex, textArg, colorArg, 1 )

#define CHOICE_CAPTION_VIS( itemIndex, textArg, visArg ) \
		CHOICE_CAPTION_COLOR_VIS( itemIndex, textArg, CHOICE_TEXTCOLOR_CAPT, visArg )

#define CHOICE_CAPTION_COLOR_VIS( itemIndex, textArg, colorArg, visArg ) \
		itemDef \
		{ \
			rect CHOICE_ORIGIN( itemIndex ) (CHOICE_SIZE_X + 50 ) CHOICE_SIZE_Y CHOICE_HORIZONTAL_ALIGN CHOICE_VERTICAL_ALIGN \
			style 1 \
			exp text ( textArg ) \
			decoration \
			textFont CHOICE_TEXTFONT \
			textScale CHOICE_TEXTSIZE \
			textStyle CHOICE_TEXTSTYLE \
			textAlign CHOICE_TEXTALIGN \
			textAlignX CHOICE_TEXT_OFFSET_X \
			foreColor CHOICE_TEXTCOLOR \
			visible visArg \
		}
#define CHOICE_SUBTEXT_COLOR_VIS( itemIndex, textArg, colorArg, visArg ) \
		itemDef \
		{ \
			type 1 \
			style 1 \
			rect CHOICE_RECT( itemIndex ) \
			exp text( textArg ) \
			textFont 3\
			textScale 0.375 \
			textAlign 6 \
			foreColor colorArg \
			visible visArg \
			decoration \
		}

#define CHOICE_SCRIPTS_ACTION( itemIndex, nameArg, actionArg ) \
		CHOICE_SCRIPTS_ALL( itemIndex, nameArg, actionArg, ;, ; )

#define CHOICE_SCRIPTS_ALL( itemIndex, nameArg, actionArg, onFocusArg, leaveFocusArg ) \
        onFocus \
        {  \
			onFocusArg \
            play CHOICE_FOCUS_SOUND; \
            setLocalVarInt "ui_menuAButton" ( itemIndex ); \
			setLocalVarString "ui_choicegroup" ( CHOICE_GROUP ); \
        } \
        leaveFocus \
        { \
			leaveFocusArg \
            setItemColor nameArg backcolor 0 0 0 0; \
            setLocalVarInt "ui_menuAButton" ( 0 ); \
        } \
		action \
		{ \
			play "mouse_click"; \
			actionArg \
		}
		
#define CHOICE_BACK( textArg, actionArg ) \
		CHOICE_BACK_VIS( textArg, actionArg, 1 )

#define CHOICE_BACK_VIS( textArg, actionArg, visArg ) \
		itemDef \
		{ \
			rect -64 -20 336 20 1 3 \
			visible 1 \
			group "mw2_button" \
			style 1 \
			foreColor CHOICE_TEXTCOLOR \
			disableColor 0.6 0.55 0.55 1 \
			background "menu_button_selection_bar" \
			type 1 \
			textFont 3 \
			textAlign 6 \
			textAlignX -60 \
			textScale 0.375 \
			text textArg \
			visible when ( visArg ) \
			onFocus \
			{ \
				play CHOICE_FOCUS_SOUND; \
				setItemColor self backcolor 0 0 0 1; \
				setLocalVarBool "ui_menuAButton" ( 1 ); \
			} \
			leaveFocus \
			{ \
				setItemColor self backcolor 0 0 0 0; \
				setLocalVarString "ui_hint_text" ( "@NULL_EMPTY" ); \
				setLocalVarBool "ui_menuAButton" ( 0 ); \
			} \
			action \
			{ \
				play "mouse_click"; \
				escape "self"; \
				actionArg \
			} \
		}

#define CHOICE_APPLY( textArg, actionArg ) \
		CHOICE_APPLY_VIS( textArg, actionArg, 1 )

#define CHOICE_APPLY_VIS( textArg, actionArg, visArg ) \
		itemDef \
		{ \
			rect -64 -20 336 20 1 3 \
			visible 1 \
			group "mw2_button" \
			style 1 \
			foreColor CHOICE_TEXTCOLOR \
			disableColor 0.6 0.55 0.55 1 \
			background "menu_button_selection_bar" \
			type 1 \
			textFont 3 \
			textAlign 6 \
			textAlignX -60 \
			textScale 0.375 \
			text textArg \
			visible visArg \
			onFocus \
			{ \
				play CHOICE_FOCUS_SOUND; \
				setItemColor self backcolor 0 0 0 1; \
				setLocalVarBool "ui_menuAButton" ( 1 ); \
			} \
			leaveFocus \
			{ \
				setItemColor self backcolor 0 0 0 0; \
				setLocalVarString "ui_hint_text" ( "@NULL_EMPTY" ); \
				setLocalVarBool "ui_menuAButton" ( 0 ); \
			} \
			action \
			{ \
				play "mouse_click"; \
				escape "self"; \
				actionArg \
			} \
		}

#define CHOICE_DESCRIPTION( visArg, xArg, yArg ) \
		itemDef \
		{ \
			name "description_choice" \
			rect (xArg) (yArg) 212 54 CHOICE_HORIZONTAL_ALIGN CHOICE_VERTICAL_ALIGN \
			exp text( localVarString( "ui_hint_text" ) ) \
			textFont 3 \
			textScale 0.375 \
			textAlign 6 \
			foreColor 1 1 1 0.65 \
			visible visArg \
			autoWrapped \
			decoration \
		}

#define CHOICE_KEYBINDHELP \
		itemDef \
		{ \
			name "keyBindStatus" \
			rect 10 10 200 15 2 3 \
			decoration \
			autoWrapped \
			style 1 \
			ownerDraw UI_KEYBINDSTATUS \
			forecolor 0.65 0.65 0.65 1 \
			type ITEM_TYPE_OWNERDRAW \
			textAlign 1 \
			textScale 0.375 \
			textAlignY 15 \
		}

#define CHOICE_NEWSTICKER_VIS(textArg, visArg, speedArg) \
		itemDef \
		{ \
			name "ticker_bg" \
			style WINDOW_STYLE_FILLED \
			rect -107 -30 900 16 HORIZONTAL_ALIGN_LEFT VERTICAL_ALIGN_TOP \
			backColor 0 0 0 0.2 \
			decoration \
			visible visArg \
		} \
		itemDef \
		{ \
			name "ticker2" \
			type ITEM_TYPE_NEWSTICKER \
			style WINDOW_STYLE_FILLED \
			rect -107 -30 900 16 HORIZONTAL_ALIGN_LEFT VERTICAL_ALIGN_TOP \
			foreColor CHOICE_TEXTCOLOR \
			backColor 0 0 0 0.3 \
			textFont UI_FONT_SMALL \
			textScale .26 \
			textAlignY 16.5 \
			text textArg \
			background "shadow_inset" \
			speed speedArg \
			decoration \
			visible visArg \
		}