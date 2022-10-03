#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZoomDebugMenuItem {
    IL2CPP_REGISTER_METHOD(0x00F59470, void, ctor, (app::ZoomDebugMenuItem * this_ptr, app::String* path, app::String* str))
    IL2CPP_REGISTER_METHOD(0x00F59590, void, DebugZoom, (float modifier))
    IL2CPP_REGISTER_METHOD(0x00F596A0, void, DebugRoundZoom, (float modifier))
    IL2CPP_REGISTER_METHOD(0x00F59810, void, OnSelectedFixedUpdate, (app::ZoomDebugMenuItem * this_ptr))
} // namespace app::classes::ZoomDebugMenuItem
