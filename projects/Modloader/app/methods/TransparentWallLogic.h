#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IMoonSetupAnimator.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/TransparentWallLogic.h>

namespace app::classes::TransparentWallLogic {
    IL2CPP_REGISTER_METHOD(0x005D6880, bool, get_IsRevealed, app::TransparentWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonSetupAnimator*, get_MoonSetupAnimator, app::TransparentWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B0DD30, void, set_MoonSetupAnimator, app::TransparentWallLogic* this_ptr, app::IMoonSetupAnimator* value)
    IL2CPP_REGISTER_METHOD(0x00446590, bool, ShowIsSecret, app::TransparentWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B0DE00, void, Awake, app::TransparentWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B0E1E0, void, OnCheckpointRestore, app::TransparentWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B0E200, void, OnDestroy, app::TransparentWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B0E3D0, void, OnEnable, app::TransparentWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B0E490, void, OnDisable, app::TransparentWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FF8B0, app::SuspendableMask__Enum, get_Mask, app::TransparentWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B0E550, void, set_Mask, app::TransparentWallLogic* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x0085D750, bool, get_IsSuspended, app::TransparentWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFE00, void, set_IsSuspended, app::TransparentWallLogic* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00B0E560, void, Hide, app::TransparentWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B0E6A0, void, Show, app::TransparentWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B0E7F0, void, OnTrigger, app::TransparentWallLogic* this_ptr, app::GameObject* other)
    IL2CPP_REGISTER_METHOD(0x00B0EB10, void, OnFixedUpdate, app::TransparentWallLogic* this_ptr, float delta)
    IL2CPP_REGISTER_METHOD(0x00B0EBA0, void, OnUpdate, app::TransparentWallLogic* this_ptr, float delta)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsAvailable, app::TransparentWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B0EDB0, app::Bounds, get_Bounds, app::TransparentWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B0F060, void, Highlight, app::TransparentWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B0F070, void, Unhighlight, app::TransparentWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008DE000, void, ctor, app::TransparentWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_1, app::TransparentWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_2, app::TransparentWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_3, app::TransparentWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_4, app::TransparentWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_5, app::TransparentWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_6, app::TransparentWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_7, app::TransparentWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_8, app::TransparentWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_9, app::TransparentWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_10, app::TransparentWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_11, app::TransparentWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_12, app::TransparentWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_13, app::TransparentWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_14, app::TransparentWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_15, app::TransparentWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_16, app::TransparentWallLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_17, app::TransparentWallLogic* this_ptr)
} // namespace app::classes::TransparentWallLogic
