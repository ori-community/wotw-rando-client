#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AttachToTransform {
    IL2CPP_REGISTER_METHOD(0x00850FA0, void, Awake, (app::AttachToTransform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00851010, void, OnDisable, (app::AttachToTransform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00851020, void, Attach, (app::AttachToTransform * this_ptr, app::Transform * attach_transform))
    IL2CPP_REGISTER_METHOD(0x00851270, void, FixedUpdate, (app::AttachToTransform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008516A0, void, OnDrawGizmosSelected, (app::AttachToTransform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008518D0, void, ctor, (app::AttachToTransform * this_ptr))
}
