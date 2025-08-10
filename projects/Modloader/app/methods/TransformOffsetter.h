#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TransformOffsetter.h>

namespace app::classes::TransformOffsetter {
    IL2CPP_REGISTER_METHOD(0x00B07790, void, OnEnable, app::TransformOffsetter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B07960, void, OnDisable, app::TransformOffsetter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B07B30, void, Offset, app::TransformOffsetter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::TransformOffsetter* this_ptr)
} // namespace app::classes::TransformOffsetter
