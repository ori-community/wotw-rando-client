#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DropPickup.h>
#include <Modloader/app/structs/DropPickup_SharedUpdateData.h>
#include <Modloader/app/structs/DropPickup_State__Enum.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::DropPickup {
    IL2CPP_REGISTER_METHOD(0x00BDDC50, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::Transform*, get_TransformSource, app::DropPickup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BDDCF0, void, set_TransformSource, app::DropPickup* this_ptr, app::Transform* value)
    IL2CPP_REGISTER_METHOD(0x00BDDD00, app::Vector3, get_CurrentGravity, app::DropPickup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BDDD30, void, set_CurrentGravity, app::DropPickup* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x00BDDD60, void, OnValidate, app::DropPickup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BDDE50, void, Awake, app::DropPickup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BDE140, void, ResetState, app::DropPickup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BDE580, void, OnPoolSpawned, app::DropPickup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, app::DropPickup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BDE590, void, OnEnable, app::DropPickup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BDE6E0, void, OnDisable, app::DropPickup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BDE830, void, ChangeState, app::DropPickup* this_ptr, app::DropPickup_State__Enum state)
    IL2CPP_REGISTER_METHOD(0x00BDE900, bool, get_PlayerInControl, app::DropPickup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFEA0, bool, get_CanFall, app::DropPickup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008496A0, void, set_CanFall, app::DropPickup* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00BDEA50, void, UpdateCanFall, app::DropPickup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BDEC00, void, UpdateState, app::DropPickup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BDF680, void, OnDestroy, app::DropPickup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BDF720, void, OnUpdate, app::DropPickup* this_ptr, app::DropPickup_SharedUpdateData* update_data)
    IL2CPP_REGISTER_METHOD(0x00BDFA60, void, UpdateWaterBehaviour, app::DropPickup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BDFBE0, void, UpdateSuckTowardsPlayer, app::DropPickup* this_ptr, app::DropPickup_SharedUpdateData* update_data)
    IL2CPP_REGISTER_METHOD(0x00BE0400, void, OnRecieveDamage, app::DropPickup* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x003FBE70, bool, get_IsSuspended, app::DropPickup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FBE80, void, set_IsSuspended, app::DropPickup* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x003FBE90, app::SuspendableMask__Enum, get_Mask, app::DropPickup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BE0640, void, set_Mask, app::DropPickup* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x00BE0700, void, ctor, app::DropPickup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BE0740, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, app::DropPickup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, app::DropPickup* this_ptr)
} // namespace app::classes::DropPickup
