#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::SimpleSwayBossAnimPostprocess {
    IL2CPP_REGISTER_METHOD(0x003FF7B0, int32_t, get_Order, (app::SimpleSwayBossAnimPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_RequiresOnUpdate, (app::SimpleSwayBossAnimPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02122DC0, bool, get_UseSway, ())
    IL2CPP_REGISTER_METHOD(0x02122E60, void, set_UseSway, (bool value))
    IL2CPP_REGISTER_METHOD(0x02122F40, void, RefreshUseSwayAll, ())
    IL2CPP_REGISTER_METHOD(0x021230A0, void, RefreshUseSway, (app::SimpleSwayBossAnimPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02123200, void, Awake, (app::SimpleSwayBossAnimPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021232F0, void, OnDestroy, (app::SimpleSwayBossAnimPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021233D0, void, OnAddedToAnimator, (app::SimpleSwayBossAnimPostprocess * this_ptr, app::MoonAnimator* animator))
    IL2CPP_REGISTER_METHOD(0x0118CF80, void, OnRemovedFromAnimator, (app::SimpleSwayBossAnimPostprocess * this_ptr, app::MoonAnimator* animator))
    IL2CPP_REGISTER_METHOD(0x021233E0, void, OnActivated, (app::SimpleSwayBossAnimPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021233F0, void, Process, (app::SimpleSwayBossAnimPostprocess * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x02123510, void, ScheduleJob, (app::SimpleSwayBossAnimPostprocess * this_ptr, app::SimpleSwayBossAnimPostprocess_PerFrameReadOnly common))
    IL2CPP_REGISTER_METHOD(0x02123730, void, CompleteJob, (app::SimpleSwayBossAnimPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02123770, void, AllocateSway, (app::SimpleSwayBossAnimPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02123A80, void, InitSway, (app::SimpleSwayBossAnimPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02123D70, void, DisposeSway, (app::SimpleSwayBossAnimPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02123DA0, void, UpdateSway, (app::SimpleSwayBossAnimPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021241C0, void, ctor, (app::SimpleSwayBossAnimPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021241E0, void, cctor, ())
} // namespace app::classes::Moon::SimpleSwayBossAnimPostprocess
