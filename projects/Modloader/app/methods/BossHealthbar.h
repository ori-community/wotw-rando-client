#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BossHealthbar.h>

namespace app::classes::BossHealthbar {
    IL2CPP_REGISTER_METHOD(0x00A26FE0, float, get_Value, (app::BossHealthbar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D3A7B0, void, Awake, (app::BossHealthbar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D3AB70, void, OnDestroy, (app::BossHealthbar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D3AD10, void, OnEnable, (app::BossHealthbar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D3AD50, void, OnDisable, (app::BossHealthbar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D3AD60, void, OnRestoreCheckpoint, (app::BossHealthbar * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04728F68, BossHealthbar_OnRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00D3AD60, void, Start, (app::BossHealthbar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D3ADB0, void, PlayShowTimeline, (app::BossHealthbar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D3AEE0, void, PlayHideTimeline, (app::BossHealthbar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D3B010, void, Show, (app::BossHealthbar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D3AD50, void, Hide, (app::BossHealthbar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D3B050, void, SetHealthbarTransparency, (app::BossHealthbar * this_ptr, float alpha))
    IL2CPP_REGISTER_METHOD(0x00D3B1D0, void, FixedUpdate, (app::BossHealthbar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D3B370, void, UpdateVisuals, (app::BossHealthbar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D3B580, void, ctor, (app::BossHealthbar * this_ptr))
} // namespace app::classes::BossHealthbar
