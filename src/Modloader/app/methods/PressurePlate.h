#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/ICanActivatePressurePlate.h>
#include <Modloader/app/structs/IDesiredUberState.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PressurePlate.h>
#include <Modloader/app/structs/PressurePlate_Target__Enum.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::PressurePlate {
    IL2CPP_REGISTER_METHOD(0x00C707B0, app::GameObject*, get_TargetGameObject, app::PressurePlate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C70820, app::Vector3, get_NotPressedPosition, app::PressurePlate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C70870, app::Vector3, get_PressedPosition, app::PressurePlate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C708C0, void, Awake, app::PressurePlate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C70FE0, void, OnDestroy, app::PressurePlate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C717B0, void, OnRestoreCheckpoint, app::PressurePlate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C71980, bool, get_CanUpdateState, app::PressurePlate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C71B30, void, OnEnable, app::PressurePlate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C71BD0, void, OnDisable, app::PressurePlate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C71C70, void, Update, app::PressurePlate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C71DD0, bool, IsTargetAllowed, app::PressurePlate* this_ptr, app::PressurePlate_Target__Enum target)
    IL2CPP_REGISTER_METHOD(0x00C71DE0, bool, IsOri, app::PressurePlate* this_ptr, app::ICanActivatePressurePlate* target)
    IL2CPP_REGISTER_METHOD(0x00C71EA0, app::ICanActivatePressurePlate*, FilterTarget, app::PressurePlate* this_ptr, app::GameObject* target)
    IL2CPP_REGISTER_METHOD(0x00C72000, void, AddPressing, app::PressurePlate* this_ptr, app::ICanActivatePressurePlate* target, bool force_add)
    IL2CPP_REGISTER_METHOD(0x00C72410, void, RemovePressing, app::PressurePlate* this_ptr, app::ICanActivatePressurePlate* target)
    IL2CPP_REGISTER_METHOD(0x00C72760, void, OnCollisionEnter, app::PressurePlate* this_ptr, app::Collision* collision)
    IL2CPP_REGISTER_METHOD(0x00C72770, void, OnCollisionStay, app::PressurePlate* this_ptr, app::Collision* collision)
    IL2CPP_REGISTER_METHOD(0x00C72780, void, OnCollision, app::PressurePlate* this_ptr, app::Collision* collision, bool force_add)
    IL2CPP_REGISTER_METHOD(0x00C72A20, void, OnCollisionExit, app::PressurePlate* this_ptr, app::Collision* collision)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, app::PressurePlate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C72AD0, void, Apply, app::PressurePlate* this_ptr, app::UberStateApplyContext__Enum context)
    IL2CPP_REGISTER_METHOD(0x00C72C20, app::IUberState__Array*, get_AffectingUberStates, app::PressurePlate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C72D50, app::List_1_UnityEngine_GameObject_*, get_AllTargets, app::PressurePlate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C72F20, app::IDesiredUberState*, GetRequirementsForTimeline, app::PressurePlate* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x00C72FC0, void, StopTransitions, app::PressurePlate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C72FE0, void, ctor, app::PressurePlate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_1, app::PressurePlate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_2, app::PressurePlate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_3, app::PressurePlate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_4, app::PressurePlate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_5, app::PressurePlate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_6, app::PressurePlate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_7, app::PressurePlate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_8, app::PressurePlate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_9, app::PressurePlate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_10, app::PressurePlate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_11, app::PressurePlate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_12, app::PressurePlate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_13, app::PressurePlate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_14, app::PressurePlate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_15, app::PressurePlate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_16, app::PressurePlate* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_17, app::PressurePlate* this_ptr)
} // namespace app::classes::PressurePlate
