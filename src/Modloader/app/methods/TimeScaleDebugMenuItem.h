#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TimeScaleDebugMenuItem.h>

namespace app::classes::TimeScaleDebugMenuItem {
    IL2CPP_REGISTER_METHOD(0x010F0780, void, ctor, app::TimeScaleDebugMenuItem* this_ptr, app::String* path, app::String* str)
    IL2CPP_REGISTER_METHOD(0x010F0890, void, OnSelectedFixedUpdate, app::TimeScaleDebugMenuItem* this_ptr)
} // namespace app::classes::TimeScaleDebugMenuItem
