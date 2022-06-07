#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CursorController {
    IL2CPP_REGISTER_METHOD(0x00DBA150, void, ResetIdleTime, ())
    IL2CPP_REGISTER_METHOD(0x00DBA1F0, void, Awake, (app::CursorController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DBA260, bool, ShouldHide, (app::CursorController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DBA410, void, Update, (app::CursorController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DBA9D0, void, ShowCursor, (app::CursorController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DBAB10, void, Start, (app::CursorController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CursorController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
}
