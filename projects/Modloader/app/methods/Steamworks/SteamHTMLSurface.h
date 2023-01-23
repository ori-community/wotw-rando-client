#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SteamAPICall_t.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/HHTMLBrowser.h>
#include <Modloader/app/structs/EHTMLMouseButton__Enum.h>
#include <Modloader/app/structs/EHTMLKeyModifiers__Enum.h>

namespace app::classes::Steamworks::SteamHTMLSurface {
    IL2CPP_REGISTER_METHOD(0x02804CE0, bool, Init, ())
    IL2CPP_REGISTER_METHOD(0x02804D90, bool, Shutdown, ())
    IL2CPP_REGISTER_METHOD(0x02804E40, app::SteamAPICall_t, CreateBrowser, (app::String * pch_user_agent, app::String* pch_user_c_s_s))
    IL2CPP_REGISTER_METHOD(0x028052B0, void, RemoveBrowser, (app::HHTMLBrowser un_browser_handle))
    IL2CPP_REGISTER_METHOD(0x02805360, void, LoadURL, (app::HHTMLBrowser un_browser_handle, app::String* pch_u_r_l, app::String* pch_post_data))
    IL2CPP_REGISTER_METHOD(0x028057B0, void, SetSize, (app::HHTMLBrowser un_browser_handle, uint32_t un_width, uint32_t un_height))
    IL2CPP_REGISTER_METHOD(0x02805880, void, StopLoad, (app::HHTMLBrowser un_browser_handle))
    IL2CPP_REGISTER_METHOD(0x02805930, void, Reload, (app::HHTMLBrowser un_browser_handle))
    IL2CPP_REGISTER_METHOD(0x028059E0, void, GoBack, (app::HHTMLBrowser un_browser_handle))
    IL2CPP_REGISTER_METHOD(0x02805A90, void, GoForward, (app::HHTMLBrowser un_browser_handle))
    IL2CPP_REGISTER_METHOD(0x02805B40, void, AddHeader, (app::HHTMLBrowser un_browser_handle, app::String* pch_key, app::String* pch_value))
    IL2CPP_REGISTER_METHOD(0x02805F90, void, ExecuteJavascript, (app::HHTMLBrowser un_browser_handle, app::String* pch_script))
    IL2CPP_REGISTER_METHOD(0x02806260, void, MouseUp, (app::HHTMLBrowser un_browser_handle, app::EHTMLMouseButton__Enum e_mouse_button))
    IL2CPP_REGISTER_METHOD(0x02806320, void, MouseDown, (app::HHTMLBrowser un_browser_handle, app::EHTMLMouseButton__Enum e_mouse_button))
    IL2CPP_REGISTER_METHOD(0x028063E0, void, MouseDoubleClick, (app::HHTMLBrowser un_browser_handle, app::EHTMLMouseButton__Enum e_mouse_button))
    IL2CPP_REGISTER_METHOD(0x028064A0, void, MouseMove, (app::HHTMLBrowser un_browser_handle, int32_t x, int32_t y))
    IL2CPP_REGISTER_METHOD(0x02806570, void, MouseWheel, (app::HHTMLBrowser un_browser_handle, int32_t n_delta))
    IL2CPP_REGISTER_METHOD(0x02806630, void, KeyDown, (app::HHTMLBrowser un_browser_handle, uint32_t n_native_key_code, app::EHTMLKeyModifiers__Enum e_h_t_m_l_key_modifiers, bool b_is_system_key))
    IL2CPP_REGISTER_METHOD(0x02806720, void, KeyUp, (app::HHTMLBrowser un_browser_handle, uint32_t n_native_key_code, app::EHTMLKeyModifiers__Enum e_h_t_m_l_key_modifiers))
    IL2CPP_REGISTER_METHOD(0x028067F0, void, KeyChar, (app::HHTMLBrowser un_browser_handle, uint32_t c_unicode_char, app::EHTMLKeyModifiers__Enum e_h_t_m_l_key_modifiers))
    IL2CPP_REGISTER_METHOD(0x028068C0, void, SetHorizontalScroll, (app::HHTMLBrowser un_browser_handle, uint32_t n_absolute_pixel_scroll))
    IL2CPP_REGISTER_METHOD(0x02806980, void, SetVerticalScroll, (app::HHTMLBrowser un_browser_handle, uint32_t n_absolute_pixel_scroll))
    IL2CPP_REGISTER_METHOD(0x02806A40, void, SetKeyFocus, (app::HHTMLBrowser un_browser_handle, bool b_has_key_focus))
    IL2CPP_REGISTER_METHOD(0x02806B10, void, ViewSource, (app::HHTMLBrowser un_browser_handle))
    IL2CPP_REGISTER_METHOD(0x02806BC0, void, CopyToClipboard, (app::HHTMLBrowser un_browser_handle))
    IL2CPP_REGISTER_METHOD(0x02806C70, void, PasteFromClipboard, (app::HHTMLBrowser un_browser_handle))
    IL2CPP_REGISTER_METHOD(0x02806D20, void, Find, (app::HHTMLBrowser un_browser_handle, app::String* pch_search_str, bool b_currently_in_find, bool b_reverse))
    IL2CPP_REGISTER_METHOD(0x02807000, void, StopFind, (app::HHTMLBrowser un_browser_handle))
    IL2CPP_REGISTER_METHOD(0x028070B0, void, GetLinkAtPosition, (app::HHTMLBrowser un_browser_handle, int32_t x, int32_t y))
    IL2CPP_REGISTER_METHOD(0x02807180, void, SetCookie, (app::String * pch_hostname, app::String* pch_key, app::String* pch_value, app::String* pch_path, uint32_t n_expires, bool b_secure, bool b_h_t_t_p_only))
    IL2CPP_REGISTER_METHOD(0x02807740, void, SetPageScaleFactor, (app::HHTMLBrowser un_browser_handle, float fl_zoom, int32_t n_point_x, int32_t n_point_y))
    IL2CPP_REGISTER_METHOD(0x02807830, void, SetBackgroundMode, (app::HHTMLBrowser un_browser_handle, bool b_background_mode))
    IL2CPP_REGISTER_METHOD(0x02807900, void, SetDPIScalingFactor, (app::HHTMLBrowser un_browser_handle, float fl_d_p_i_scaling))
    IL2CPP_REGISTER_METHOD(0x028079C0, void, OpenDeveloperTools, (app::HHTMLBrowser un_browser_handle))
    IL2CPP_REGISTER_METHOD(0x02807A70, void, AllowStartRequest, (app::HHTMLBrowser un_browser_handle, bool b_allowed))
    IL2CPP_REGISTER_METHOD(0x02807B40, void, JSDialogResponse, (app::HHTMLBrowser un_browser_handle, bool b_result))
    IL2CPP_REGISTER_METHOD(0x02807C10, void, FileLoadDialogResponse, (app::HHTMLBrowser un_browser_handle, void* pch_selected_files))
} // namespace app::classes::Steamworks::SteamHTMLSurface
