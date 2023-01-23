#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AttachSpriteToTransform.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/UpdateType__Enum.h>

namespace app::classes::AttachSpriteToTransform {
    IL2CPP_REGISTER_METHOD(0x0084D3C0, bool, get_IsSuspended, (app::AttachSpriteToTransform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0084D3D0, void, set_IsSuspended, (app::AttachSpriteToTransform * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x008468B0, app::SuspendableMask__Enum, get_Mask, (app::AttachSpriteToTransform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008468C0, void, set_Mask, (app::AttachSpriteToTransform * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x0084D3E0, bool, IsAttached, (app::AttachSpriteToTransform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0084D480, void, Awake, (app::AttachSpriteToTransform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0084D770, void, OnEnable, (app::AttachSpriteToTransform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0084D810, void, OnDisable, (app::AttachSpriteToTransform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0084D8B0, void, PerformAttachment, (app::AttachSpriteToTransform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::UpdateType__Enum, get_UpdateType, (app::AttachSpriteToTransform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0084E2D0, void, OnUpdate, (app::AttachSpriteToTransform * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x0084F180, void, ctor, (app::AttachSpriteToTransform * this_ptr))
} // namespace app::classes::AttachSpriteToTransform
