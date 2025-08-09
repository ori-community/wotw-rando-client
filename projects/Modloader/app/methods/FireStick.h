#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/FireStick.h>
#include <Modloader/app/structs/FireStick_Usability__Enum.h>
#include <Modloader/app/structs/Flammable.h>
#include <Modloader/app/structs/Flammable_FlameColor__Enum.h>
#include <Modloader/app/structs/Flammable_FlameState__Enum.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/ThrowAnimationType__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/WaterfallIntersectionMode__Enum.h>

namespace app::classes::FireStick {
    IL2CPP_REGISTER_METHOD(0x01256710, bool, get_IsLit, app::FireStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01256740, float, get_CurrentHoldMaskTargetWeight, app::FireStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01256750, void, set_CurrentHoldMaskTargetWeight, app::FireStick* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x01256760, float, get_CurrentHoldMaskBlendSpeed, app::FireStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AD85A0, void, set_CurrentHoldMaskBlendSpeed, app::FireStick* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x0068D690, void, SetUsability, app::FireStick* this_ptr, app::FireStick_Usability__Enum usability)
    IL2CPP_REGISTER_METHOD(0x01256770, void, SetInteractorPosition, app::FireStick* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x01256790, void, Awake, app::FireStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01256C70, void, Start, app::FireStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01256D50, void, OnDestroy, app::FireStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01256F00, void, Destroy, app::FireStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01257030, void, RegisterHit, app::FireStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01257070, bool, ShouldBreak, app::FireStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01257080, void, Break, app::FireStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012571A0, void, FixedUpdate, app::FireStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01257740, void, LateUpdate, app::FireStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012578C0, void, UpdateLightPosition, app::FireStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01257BB0, void, OnEnable, app::FireStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01257DB0, void, OnDisable, app::FireStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01257F30, void, OnCollisionEnter, app::FireStick* this_ptr, app::Collision* collision)
    IL2CPP_REGISTER_METHOD(0x012580C0, void, DebugToggleTorch, )
    IL2CPP_REGISTER_METHOD(0x01258400, void, DebugPickUpTorch, )
    IL2CPP_REGISTER_METHOD(0x01258710, void, DebugExtinguishTorch, )
    IL2CPP_REGISTER_METHOD(0x012587F0, void, OnPickedUp, app::FireStick* this_ptr, bool serialization)
    IL2CPP_REGISTER_METHOD(0x01258910, void, OnDropped, app::FireStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01258A10, void, Light, app::FireStick* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01258D10,
        void,
        SetupInstantiatedFlameProperties,
        app::FireStick* this_ptr,
        app::Flammable_FlameColor__Enum color,
        app::Flammable_FlameState__Enum state
    )
    IL2CPP_REGISTER_METHOD(0x01258D60, void, UpdateFlameGraphics, app::FireStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01258ED0, void, Extinguish, app::FireStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01259290, app::IEnumerator*, DropAndDestroy, app::FireStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012593E0, bool, get_CanBeUsed, app::FireStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012595B0, void, BeginUse, app::FireStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B59FC0, void, EndUse, app::FireStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01259930, void, OnLightTorchAnimationFinishedStep1, app::FireStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01259AF0, void, OnLightTorchAnimationFinishedStep2, app::FireStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01259B10, void, OnPlaceTorchAnimationFinishedStep1, app::FireStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01259F00, app::IEnumerator*, DeactivateWithDelay, app::FireStick* this_ptr, float delay)
    IL2CPP_REGISTER_METHOD(0x0125A060, app::IEnumerator*, DestroyAfter, app::FireStick* this_ptr, float time)
    IL2CPP_REGISTER_METHOD(0x0125A1C0, bool, ShouldPlaceTorchAnimationKeepPlaying, app::FireStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0125A370, void, OnFlammableStateChange, app::FireStick* this_ptr, app::Flammable* flame)
    IL2CPP_REGISTER_METHOD(0x0071F5B0, app::ThrowAnimationType__Enum, GetAnimationType, app::FireStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0125A520, float, GetGravity, app::FireStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0125A530, float, GetThrowVelocityMultiplier, app::FireStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0125A540, void, OnStartAim, app::FireStick* this_ptr, app::Vector3 position, app::Vector3 velocity)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUpdateAim, app::FireStick* this_ptr, app::Vector3 position, app::Vector3 velocity)
    IL2CPP_REGISTER_METHOD(0x0125A960, void, OnThrow, app::FireStick* this_ptr, app::Vector3 position, app::Vector3 velocity)
    IL2CPP_REGISTER_METHOD(0x0125ADC0, void, HoldTorchUp, app::FireStick* this_ptr, bool hold_up)
    IL2CPP_REGISTER_METHOD(0x0125AE10, void, OnExtinguishingAbilityPerform, app::FireStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0125AE70, app::GameObject*, GetCurrentSparkPrefab, app::FireStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0125AEB0, app::Vector2, get_PreviusPositionForWaterfallInteraction, app::FireStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0125AED0, void, set_PreviusPositionForWaterfallInteraction, app::FireStick* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x0125AF00, app::Vector2, get_PositionForWaterfallInteraction, app::FireStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::WaterfallIntersectionMode__Enum, get_WaterfallIntersectionMode, app::FireStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::Rigidbody*, get_RigidbodyForWaterfallInteraction, app::FireStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsFlamable, app::FireStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0125B060, app::Vector2, get_SpeedForWaterfallInteraction, app::FireStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0125B1F0, void, set_SpeedForWaterfallInteraction, app::FireStick* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x0125B350, app::Rect, get_BoundsForWaterfallInteraction, app::FireStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0125B510, void, OnDrawGizmosSelected, app::FireStick* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0125B5F0, void, ctor, app::FireStick* this_ptr)
} // namespace app::classes::FireStick
