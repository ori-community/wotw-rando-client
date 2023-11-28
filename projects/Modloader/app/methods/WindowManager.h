#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/WindowManager.h>

namespace app::classes::WindowManager {
    IL2CPP_REGISTER_METHOD(0x0057AB90, int32_t, SetWindowLong, (void* h_wnd, int32_t n_index, int32_t dw_new_long))
    IL2CPP_REGISTER_METHOD(0x0057AC40, int32_t, GetWindowLong, (void* h_wnd, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0057ACF0, void*, FindWindowByCaption, (void* zero_only, app::String* lp_window_name))
    IL2CPP_REGISTER_METHOD(0x0057AED0, bool, DrawMenuBar, (void* h_wnd))
    IL2CPP_REGISTER_METHOD(0x0057AF70, void*, SetWindowPos, (void* h_wnd, int32_t h_wnd_insert_after, int32_t x, int32_t Y, int32_t cx, int32_t cy, int32_t w_flags))
    IL2CPP_REGISTER_METHOD(0x0057B030, bool, GetWindowRect, (void* h_wnd, app::RECT* lp_rect))
    IL2CPP_REGISTER_METHOD(0x0057B0E0, void*, GetForegroundWindow, ())
    IL2CPP_REGISTER_METHOD(0x0057B170, void*, GetActiveWindow, ())
    IL2CPP_REGISTER_METHOD(0x0057B200, bool, ShowWindow, (void* hwnd, int32_t n_cmd_show))
    IL2CPP_REGISTER_METHOD(0x0057B2B0, void*, GetFocus, ())
    IL2CPP_REGISTER_METHOD(0x0057B340, void, Awake, (app::WindowManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057B470, int32_t, MakeBorderless, (app::WindowManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057B4F0, void, MakeBordered, (app::WindowManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057B610, void, UpdateWindowProperties, (app::WindowManager * this_ptr, int32_t properties))
    IL2CPP_REGISTER_METHOD(0x0057B730, void, KickWindow, (app::WindowManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FC3D0, bool, IsFullScreen, (app::WindowManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057B7B0, bool, IsMaximized, (app::WindowManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057B7E0, bool, IsMinimized, (app::WindowManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057B810, bool, HasFocus, (app::WindowManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057B8B0, void, Update, (app::WindowManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057B9D0, void, ctor, (app::WindowManager * this_ptr))
} // namespace app::classes::WindowManager
