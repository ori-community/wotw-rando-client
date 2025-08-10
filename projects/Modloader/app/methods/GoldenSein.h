#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/GoldenSein.h>
#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::GoldenSein {
    IL2CPP_REGISTER_METHOD(0x00660430, app::SeinCharacter*, get_Sein, app::GoldenSein* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00660440, void, set_Sein, app::GoldenSein* this_ptr, app::SeinCharacter* value)
    IL2CPP_REGISTER_METHOD(0x008011D0, app::SceneRoot*, GetSceneRoot, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x00801400, app::Vector3, get_ScenePosition, app::GoldenSein* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008017C0, app::Transform*, get_OriTransform, app::GoldenSein* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008018C0, app::Vector3, HoverOffset, app::GoldenSein* this_ptr, float time)
    IL2CPP_REGISTER_METHOD(0x008019C0, app::Vector3, get_Position, app::GoldenSein* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00801A50, void, set_Position, app::GoldenSein* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x0068A180, bool, get_IsSuspended, app::GoldenSein* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00801AD0, void, set_IsSuspended, app::GoldenSein* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00801AE0, app::SuspendableMask__Enum, get_Mask, app::GoldenSein* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00801AF0, void, set_Mask, app::GoldenSein* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x00801BB0, void, Awake, app::GoldenSein* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00801CC0, void, OnDestroy, app::GoldenSein* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00801D60, void, OnEnable, app::GoldenSein* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDisable, app::GoldenSein* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00801FF0, void, MoveBackToPlayer, app::GoldenSein* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008021F0, app::IAttackable*, FindNearestAttackable, app::GoldenSein* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008027E0, void, UpdateHovering, app::GoldenSein* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00803210, void, UpdateShooting, app::GoldenSein* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008037F0, void, FixedUpdate, app::GoldenSein* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00803CB0, void, CheckInput, app::GoldenSein* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00803DF0, bool, CheckCanAttack, app::GoldenSein* this_ptr, app::AbilityType__Enum ability)
    IL2CPP_REGISTER_METHOD(0x00803E50, app::IEnumerator*, UndrainRoutine, app::GoldenSein* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00803FA0, void, PlayPressButtonTimeline, app::GoldenSein* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00804090, void, ctor, app::GoldenSein* this_ptr)
} // namespace app::classes::GoldenSein
