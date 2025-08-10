#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/Firefly.h>
#include <Modloader/app/structs/FireflyHive.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::FireflyHive {
    IL2CPP_REGISTER_METHOD(0x0125F550, app::Firefly*, get_FireflyInstance, app::FireflyHive* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0125F950, int32_t, get_PointIndex, app::FireflyHive* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0125F960, void, set_PointIndex, app::FireflyHive* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0125FBE0, bool, get_ShouldUpdatePath, app::FireflyHive* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0125FCD0, void, OnEnable, app::FireflyHive* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0125FEA0, void, OnDisable, app::FireflyHive* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01260070, void, OnValidate, app::FireflyHive* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012600B0, void, OnAwake, app::FireflyHive* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01260420, void, OnDestroy, app::FireflyHive* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012604D0, void, FixedUpdate, app::FireflyHive* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012608E0, void, UpdatePath, app::FireflyHive* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012609A0, void, ReleaseFirely, app::FireflyHive* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01260FB0, void, BecomeReady, app::FireflyHive* this_ptr, bool spawn_orbs)
    IL2CPP_REGISTER_METHOD(0x01261130, void, ResetPointsIndexing, app::FireflyHive* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012614E0, void, PlayTimeline, app::FireflyHive* this_ptr, app::MoonTimeline* timeline, app::Action* on_timeline_end)
    IL2CPP_REGISTER_METHOD(0x012615C0, void, StopAllTimelines, app::FireflyHive* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_Position, app::FireflyHive* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsDead, app::FireflyHive* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01261780, bool, get_FireflyInsideFrustum, app::FireflyHive* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012617B0, bool, get_CanBeHit, app::FireflyHive* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012617C0, void, OnRecieveDamage, app::FireflyHive* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x01261B60, void, OnRestoreCheckpoint, app::FireflyHive* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01261CF0, bool, get_IsOn, app::FireflyHive* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01261D00, void, Activate, app::FireflyHive* this_ptr, bool activate)
    IL2CPP_REGISTER_METHOD(0x01261DE0, void, OnFrustumEnter, app::FireflyHive* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01261EA0, void, OnFrustumExit, app::FireflyHive* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01261EB0, bool, get_InsideFrustum, app::FireflyHive* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01261EC0, app::Bounds, get_Bounds, app::FireflyHive* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_AllowCacheBounds, app::FireflyHive* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01261EE0, void, ctor, app::FireflyHive* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012620A0, void, _ReleaseFirely_b__32_0, app::FireflyHive* this_ptr)
    IL2CPP_REGISTER_METHOD(0x012620C0, void, _BecomeReady_b__33_0, app::FireflyHive* this_ptr)
} // namespace app::classes::FireflyHive
