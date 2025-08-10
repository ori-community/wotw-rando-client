#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/TransparentWallB.h>
#include <Modloader/app/structs/UpdateType__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::TransparentWallB {
    IL2CPP_REGISTER_METHOD(0x00B0C830, bool, CanPlaySound, app::TransparentWallB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00675C60, bool, get_IsRevealed, app::TransparentWallB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::UpdateType__Enum, get_UpdateType, app::TransparentWallB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B0C950, void, Awake, app::TransparentWallB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B0CB30, void, OnDestroy, app::TransparentWallB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B0CD00, void, OnCheckpointRestore, app::TransparentWallB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B0CD10, void, OnEnable, app::TransparentWallB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B0CDD0, void, OnDisable, app::TransparentWallB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006B5B90, void, Serialize, app::TransparentWallB* this_ptr, app::Archive* ar)
    IL2CPP_REGISTER_METHOD(0x00B0CE90, void, Start, app::TransparentWallB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B0CFC0, void, OnTriggerEnter, app::TransparentWallB* this_ptr, app::Collider* other)
    IL2CPP_REGISTER_METHOD(0x00B0CFF0, void, OnTriggerStay, app::TransparentWallB* this_ptr, app::Collider* other)
    IL2CPP_REGISTER_METHOD(0x00B0D000, void, OnEnterTrigger, app::TransparentWallB* this_ptr, app::Collider* other)
    IL2CPP_REGISTER_METHOD(0x00B0D3C0, void, OnTrigger, app::TransparentWallB* this_ptr, app::Collider* other)
    IL2CPP_REGISTER_METHOD(0x00B0D510, void, OnUpdate, app::TransparentWallB* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x00675C60, bool, get_WallVisible, app::TransparentWallB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B0D960, void, ctor, app::TransparentWallB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D8A80, bool, get_IsSuspended, app::TransparentWallB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006DC040, void, set_IsSuspended, app::TransparentWallB* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x006DC050, app::SuspendableMask__Enum, get_Mask, app::TransparentWallB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B0D990, void, set_Mask, app::TransparentWallB* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsAvailable, app::TransparentWallB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_Position, app::TransparentWallB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B0DA40, app::Bounds, get_Bounds, app::TransparentWallB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B0DCF0, void, Highlight, app::TransparentWallB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B0DD10, void, Unhighlight, app::TransparentWallB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_1, app::TransparentWallB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_2, app::TransparentWallB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_3, app::TransparentWallB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_4, app::TransparentWallB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_5, app::TransparentWallB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_6, app::TransparentWallB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_7, app::TransparentWallB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_8, app::TransparentWallB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_9, app::TransparentWallB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_10, app::TransparentWallB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_11, app::TransparentWallB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_12, app::TransparentWallB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_13, app::TransparentWallB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_14, app::TransparentWallB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_15, app::TransparentWallB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_16, app::TransparentWallB* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonTypeResolver*, GetResolverForType_17, app::TransparentWallB* this_ptr)
} // namespace app::classes::TransparentWallB
