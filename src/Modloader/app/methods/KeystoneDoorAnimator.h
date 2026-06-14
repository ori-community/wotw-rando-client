#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IMoonSetupVisuals.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/ITimelineEntity.h>
#include <Modloader/app/structs/KeystoneDoorAnimator.h>

namespace app::classes::KeystoneDoorAnimator {
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::IMoonSetupVisuals*, get_MoonSetupVisuals, app::KeystoneDoorAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E6C5F0, void, set_MoonSetupVisuals, app::KeystoneDoorAnimator* this_ptr, app::IMoonSetupVisuals* value)
    IL2CPP_REGISTER_METHOD(0x005B96A0, app::ITimelineEntity*, get_DoorFailTimeline, app::KeystoneDoorAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005B96C0, app::ITimelineEntity*, get_DoorOpeningTimeline, app::KeystoneDoorAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::KeystoneDoorAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_1, app::KeystoneDoorAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_2, app::KeystoneDoorAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_3, app::KeystoneDoorAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_4, app::KeystoneDoorAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_5, app::KeystoneDoorAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_6, app::KeystoneDoorAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_7, app::KeystoneDoorAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_8, app::KeystoneDoorAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_9, app::KeystoneDoorAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_10, app::KeystoneDoorAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_11, app::KeystoneDoorAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_12, app::KeystoneDoorAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_13, app::KeystoneDoorAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_14, app::KeystoneDoorAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_15, app::KeystoneDoorAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_16, app::KeystoneDoorAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonTypeResolver*, GetResolverForType_17, app::KeystoneDoorAnimator* this_ptr)
} // namespace app::classes::KeystoneDoorAnimator
