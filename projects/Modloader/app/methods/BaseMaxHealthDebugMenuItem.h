#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BaseMaxHealthDebugMenuItem.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::BaseMaxHealthDebugMenuItem {
    IL2CPP_REGISTER_METHOD(0x00F86430, void, ctor, app::BaseMaxHealthDebugMenuItem* this_ptr, app::String* path, app::String* str)
    IL2CPP_REGISTER_METHOD(0x00F86650, void, OnSelectedFixedUpdate, app::BaseMaxHealthDebugMenuItem* this_ptr)
} // namespace app::classes::BaseMaxHealthDebugMenuItem
