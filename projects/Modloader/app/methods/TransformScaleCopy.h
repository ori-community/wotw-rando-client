#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TransformScaleCopy.h>

namespace app::classes::TransformScaleCopy {
    IL2CPP_REGISTER_METHOD(0x00B09A10, void, FixedUpdate, app::TransformScaleCopy* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::TransformScaleCopy* this_ptr)
} // namespace app::classes::TransformScaleCopy
