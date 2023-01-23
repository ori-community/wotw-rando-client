#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IMoonSetupVisuals.h>
#include <Modloader/app/structs/DoorAnimator.h>
#include <Modloader/app/structs/ITimelineEntity.h>
#include <Modloader/app/structs/IGenericUberState.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>

namespace app::classes::DoorAnimator {
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonSetupVisuals*, get_MoonSetupVisuals, (app::DoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B9D240, void, set_MoonSetupVisuals, (app::DoorAnimator * this_ptr, app::IMoonSetupVisuals* value))
    IL2CPP_REGISTER_METHOD(0x005B96A0, app::ITimelineEntity*, get_OpenDoorTimeline, (app::DoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B96C0, app::ITimelineEntity*, get_CloseDoorTimeline, (app::DoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_InvalidateParentTimelineCache, (app::DoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058ED80, void, set_InvalidateParentTimelineCache, (app::DoorAnimator * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x005B96E0, void, StartOpeningSequence, (app::DoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B9710, void, StartClosingSequence, (app::DoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B9D310, void, SetUberStatesInTimelines, (app::DoorAnimator * this_ptr, app::IGenericUberState* new_state))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_1, (app::DoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_2, (app::DoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_3, (app::DoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_4, (app::DoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_5, (app::DoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_6, (app::DoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_7, (app::DoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_8, (app::DoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_9, (app::DoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_10, (app::DoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_11, (app::DoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_12, (app::DoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_13, (app::DoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_14, (app::DoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_15, (app::DoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_16, (app::DoorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_17, (app::DoorAnimator * this_ptr))
} // namespace app::classes::DoorAnimator
