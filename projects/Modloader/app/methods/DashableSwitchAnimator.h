#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IMoonSetupVisuals.h>
#include <Modloader/app/structs/DashableSwitchAnimator.h>
#include <Modloader/app/structs/IGenericUberState.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/ITimelineEntity.h>

namespace app::classes::DashableSwitchAnimator {
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonSetupVisuals*, get_MoonSetupVisuals, (app::DashableSwitchAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DD1A70, void, set_MoonSetupVisuals, (app::DashableSwitchAnimator * this_ptr, app::IMoonSetupVisuals* value))
    IL2CPP_REGISTER_METHOD(0x005B96A0, app::ITimelineEntity*, get_OpenSwitchTimeline, (app::DashableSwitchAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B96C0, app::ITimelineEntity*, get_CloseSwitchTimeline, (app::DashableSwitchAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C89860, app::ITimelineEntity*, get_RecedeSwitchTimeline, (app::DashableSwitchAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B96E0, void, StartOpeningSequence, (app::DashableSwitchAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B9710, void, StartClosingSequence, (app::DashableSwitchAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DD1B40, void, SetUberStatesInTimelines, (app::DashableSwitchAnimator * this_ptr, app::IGenericUberState* new_state))
    IL2CPP_REGISTER_METHOD(0x00DD1D10, void, RecedeSlightly, (app::DashableSwitchAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DD1DF0, void, InterruptRecede, (app::DashableSwitchAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DashableSwitchAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_1, (app::DashableSwitchAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_2, (app::DashableSwitchAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_3, (app::DashableSwitchAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_4, (app::DashableSwitchAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_5, (app::DashableSwitchAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_6, (app::DashableSwitchAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_7, (app::DashableSwitchAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_8, (app::DashableSwitchAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_9, (app::DashableSwitchAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_10, (app::DashableSwitchAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_11, (app::DashableSwitchAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_12, (app::DashableSwitchAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_13, (app::DashableSwitchAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_14, (app::DashableSwitchAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_15, (app::DashableSwitchAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_16, (app::DashableSwitchAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_17, (app::DashableSwitchAnimator * this_ptr))
} // namespace app::classes::DashableSwitchAnimator
