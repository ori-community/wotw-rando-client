#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BossHealthbar2.h>
#include <Modloader/app/structs/Vitals.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/BossHealthbar2_BossNameType__Enum.h>

namespace app::classes::BossHealthbar2 {
    IL2CPP_REGISTER_METHOD(0x00D3B6E0, app::BossHealthbar2*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x00D3B840, void, SetBossVitals, (app::Vitals * vitals, app::Func_1_Boolean_* should_show_now))
    IL2CPP_REGISTER_METHOD(0x00D3BA50, void, SetBossName_1, (app::MessageProvider * provider))
    IL2CPP_REGISTER_METHOD(0x00D3BBA0, void, SetBossName_2, (app::BossHealthbar2_BossNameType__Enum boss_type))
    IL2CPP_REGISTER_METHOD(0x00D3BEA0, void, SetBossVitalsInternal, (app::BossHealthbar2 * this_ptr, app::Vitals* vitals, app::Func_1_Boolean_* should_show_now))
    IL2CPP_REGISTER_METHOD(0x00D3BFD0, float, get_Value, (app::BossHealthbar2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D3BFF0, void, Awake, (app::BossHealthbar2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D3C340, void, OnDestroy, (app::BossHealthbar2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D3C4E0, void, OnRestoreCheckpoint, (app::BossHealthbar2 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473AB18, BossHealthbar2_OnRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00D3C4F0, bool, get_ShouldBeShown, (app::BossHealthbar2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D3C780, void, UpdateValue, (app::BossHealthbar2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D3C8B0, void, FixedUpdate, (app::BossHealthbar2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D3CC70, void, UpdateVisuals, (app::BossHealthbar2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D3CE70, void, PlayShowTimeline, (app::BossHealthbar2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D3D130, void, PlayHideTimeline, (app::BossHealthbar2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D3D3A0, void, Show, (app::BossHealthbar2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D3D440, void, Hide, (app::BossHealthbar2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CAE830, bool, get_IsVisible, (app::BossHealthbar2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D3D460, void, ctor, (app::BossHealthbar2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x00D3D4C0, void, _PlayHideTimeline_b__42_0, (app::BossHealthbar2 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474F038, BossHealthbar2__PlayHideTimeline_b__42_0__MethodInfo)
} // namespace app::classes::BossHealthbar2
