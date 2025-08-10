#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GlobalDebugQuadScaleMenuItem.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::GlobalDebugQuadScaleMenuItem {
    IL2CPP_REGISTER_METHOD(0x007F7750, void, ctor, app::GlobalDebugQuadScaleMenuItem* this_ptr, app::String* path, app::String* str)
    IL2CPP_REGISTER_METHOD(0x007F7830, void, OnSelectedFixedUpdate, app::GlobalDebugQuadScaleMenuItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007F7AD0, void, cctor, )
} // namespace app::classes::GlobalDebugQuadScaleMenuItem
