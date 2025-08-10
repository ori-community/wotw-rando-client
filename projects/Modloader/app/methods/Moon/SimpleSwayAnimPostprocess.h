#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/SimpleSwayAnimPostprocess.h>

namespace app::classes::Moon::SimpleSwayAnimPostprocess {
    IL2CPP_REGISTER_METHOD(0x0211F5E0, bool, get_UseSimpleSway, )
    IL2CPP_REGISTER_METHOD(0x0211F680, void, set_UseSimpleSway, bool value)
    IL2CPP_REGISTER_METHOD(0x0211F730, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x0211F7C0, void, SetSimpleSway, bool set_simple)
    IL2CPP_REGISTER_METHOD(0x003FF8B0, int32_t, get_Order, app::SimpleSwayAnimPostprocess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_RequiresOnUpdate, app::SimpleSwayAnimPostprocess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnUpdate, app::SimpleSwayAnimPostprocess* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x0211F930, void, Awake, app::SimpleSwayAnimPostprocess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0211F940, void, OnDestroy, app::SimpleSwayAnimPostprocess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0211F9E0, void, OnAddedToAnimator, app::SimpleSwayAnimPostprocess* this_ptr, app::MoonAnimator* animator)
    IL2CPP_REGISTER_METHOD(0x0118CF80, void, OnRemovedFromAnimator, app::SimpleSwayAnimPostprocess* this_ptr, app::MoonAnimator* animator)
    IL2CPP_REGISTER_METHOD(0x0211FB00, void, OnActivated, app::SimpleSwayAnimPostprocess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0211FB10, void, Process, app::SimpleSwayAnimPostprocess* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x0211FC30, void, OnPostEnable, app::SimpleSwayAnimPostprocess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0211FD70, void, SwitchWeights, app::SimpleSwayAnimPostprocess* this_ptr, bool use_simple_sway)
    IL2CPP_REGISTER_METHOD(0x0211FDC0, void, OnPostDisable, app::SimpleSwayAnimPostprocess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0211FEC0, void, AllocateSway, app::SimpleSwayAnimPostprocess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02120220, void, InitSway, app::SimpleSwayAnimPostprocess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0211F940, void, DisposeSway, app::SimpleSwayAnimPostprocess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02120340, void, GetJointTransforms, app::SimpleSwayAnimPostprocess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02120550, void, ScheduleJobs, app::SimpleSwayAnimPostprocess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02120650, void, CompleteJobs, app::SimpleSwayAnimPostprocess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02120710, void, UpdateSway, app::SimpleSwayAnimPostprocess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008A2C20, void, ctor, app::SimpleSwayAnimPostprocess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02120940, void, cctor, )
} // namespace app::classes::Moon::SimpleSwayAnimPostprocess
