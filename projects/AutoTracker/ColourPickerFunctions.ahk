ShowColourPicker:
    Gui, ColourPicker:Show, w351 h105, Colour Picker
return

EditSub:
	;Get Values
	GuiControlGet,Rval,,eR
	GuiControlGet,Gval,,eG
	GuiControlGet,Bval,,eB
	;Set preview
	gosub set
	;Make Everything else aware
	GuiControl, ColourPicker:,uR,%Rval%
	GuiControl, ColourPicker:,uG,%Gval%
	GuiControl, ColourPicker:,uB,%Bval%
	GuiControl, ColourPicker:,sR,%Rval%
	GuiControl, ColourPicker:,sG,%Gval%
	GuiControl, ColourPicker:,sB,%Bval%
return

UpDownSub:
	;Get Values
	GuiControlGet,Rval,,uR
	GuiControlGet,Gval,,uG
	GuiControlGet,Bval,,uB
	;Set preview
	gosub set
	;Make Everything else aware
	GuiControl, ColourPicker:,eR,%Rval%
	GuiControl, ColourPicker:,eG,%Gval%
	GuiControl, ColourPicker:,eB,%Bval%
	GuiControl, ColourPicker:,sR,%Rval%
	GuiControl, ColourPicker:,sG,%Gval%
	GuiControl, ColourPicker:,sB,%Bval%
return

SliderSub:
	;Get Values
	GuiControlGet,Rval,,sR
	GuiControlGet,Gval,,sG
	GuiControlGet,Bval,,sB
	;Set preview
	gosub set
	;Make Everything else aware
	GuiControl, ColourPicker:,eR,%Rval%
	GuiControl, ColourPicker:,eG,%Gval%
	GuiControl, ColourPicker:,eB,%Bval%
	GuiControl, ColourPicker:,uR,%Rval%
	GuiControl, ColourPicker:,uG,%Gval%
	GuiControl, ColourPicker:,uB,%Bval%
return

set:
	;Convert values to Hex
	RGBval:=RGB(Rval,Gval,Bval)
	;Display Tooltip
	; ToolTip Red: %Rval%`nGreen: %Gval%`nBlue: %Bval%`nHex: %RGBval%
	;Make tooltip disappear after 375 ms (3/8th of a second)
	; SetTimer, RemoveToolTip, 375
	;Apply colour to preview
	GuiControl, ColourPicker:+Background%RGBval%,pC
return

; RemoveToolTip:
; 	SetTimer, RemoveToolTip, Off ;Turn timer off
; 	ToolTip ;Turn off tooltip
; return

ButtonSub:
	; Remove '0x' prefix from the hex code.
	StringReplace,RGBval,RGBval,0x
	; Display Last selected values... (these values can later be used), and Notify the user
	; MsgBox,64,Simple Color Dialog,RGB: (%Rval%, %Gval%, %Bval%)`nHex: %RGBval%`nCopied to Clipboard!
    bgcolour := RGBval
    Gui, Main:Color, %bgcolour%
    IniWrite, %bgcolour%, %inipath%, Tracker, BackgroundColour
return

;Function to convert Decimal RGB to Hexadecimal RBG, Note: '0' (zero) padding is unnecessary
RGB(r, g, b) {
	;Shift Numbers
	var:=(r << 16) + (g << 8) + b
	;Save current A_FormatInteger
	OldFormat := A_FormatInteger
	;Set Hex A_FormatInteger mode
	SetFormat, Integer, Hex
	;Force decimal number to Hex number
	var += 0
	;set original A_FormatInteger mode
	SetFormat, Integer, %OldFormat%
	return var
}