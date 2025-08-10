#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DoorLogic.h>
#include <Modloader/app/structs/IDesiredUberState.h>
#include <Modloader/app/structs/IMoonSetupAnimator.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/IUberState.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::DoorLogic {
    IL2CPP_REGISTER_METHOD(0x00BDA9A0, app::IUberState*, get_UberState, app::DoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonSetupAnimator*, get_MoonSetupAnimator, app::DoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BDAA60, void, set_MoonSetupAnimator, app::DoorLogic* this_ptr, app::IMoonSetupAnimator* value)
    IL2CPP_REGISTER_METHOD(0x00BDAB30, void, Awake, app::DoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BDAC40, void, PerformStateTransition, app::DoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BDADC0, app::IDesiredUberState*, GetRequirementsForTimeline, app::DoorLogic* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x00BDB080, void, StopTransitions, app::DoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BDAB30, void, SetAnimatorUberStates, app::DoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::DoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_1, app::DoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_2, app::DoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_3, app::DoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_4, app::DoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_5, app::DoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_6, app::DoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_7, app::DoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_8, app::DoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_9, app::DoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_10, app::DoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_11, app::DoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_12, app::DoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_13, app::DoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_14, app::DoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_15, app::DoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_16, app::DoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_17, app::DoorLogic* this_ptr)
} // namespace app::classes::DoorLogic
