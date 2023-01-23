#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ExtraZoomDebugMenuItem.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ExtraZoomDebugMenuItem {
    IL2CPP_REGISTER_METHOD(0x00987D40, void, ctor, (app::ExtraZoomDebugMenuItem * this_ptr, app::String* path, app::String* str))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Apply, ())
    IL2CPP_REGISTER_METHOD(0x00987E40, void, DebugZoom, (float modifier))
    IL2CPP_REGISTER_METHOD(0x00987F50, void, DebugRoundZoom, (float modifier))
    IL2CPP_REGISTER_METHOD(0x009880C0, void, OnSelectedFixedUpdate, (app::ExtraZoomDebugMenuItem * this_ptr))
} // namespace app::classes::ExtraZoomDebugMenuItem
