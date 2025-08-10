#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GlobalBrightnessAnimator.h>
#include <Modloader/app/structs/GlobalBrightnessController_BrigthnessContributionOrder__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IMoonTypeResolver.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/TimelineEntityRecord.h>

namespace app::classes::GlobalBrightnessAnimator {
    IL2CPP_REGISTER_METHOD(0x007F5790, float, get_CurrentWeight, app::GlobalBrightnessAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00623270, void, set_ExternalMultipler, app::GlobalBrightnessAnimator* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x007F58D0, float, get_Time, app::GlobalBrightnessAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007F58E0, void, set_Time, app::GlobalBrightnessAnimator* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x007F58F0, void, OnStartPlayback, app::GlobalBrightnessAnimator* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x007F59E0, void, OnUpdateEntity, app::GlobalBrightnessAnimator* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x007F5A00, void, OnStopPlayback, app::GlobalBrightnessAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0043BB80, float, get_BrightnessInfluceAdditive, app::GlobalBrightnessAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0043BB80, float, get_BrightnessInfluceMultiplicative, app::GlobalBrightnessAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ContributeToAdditive, app::GlobalBrightnessAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ContributeToMultiplicative, app::GlobalBrightnessAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x007F5AA0, float, get_BrightnessInfluceWeight, app::GlobalBrightnessAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x007E3F30,
        app::GlobalBrightnessController_BrigthnessContributionOrder__Enum,
        get_BrightnessInfluceOrder,
        app::GlobalBrightnessAnimator* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x007F5BE0,
        void,
        SynchronizeData,
        app::GlobalBrightnessAnimator* this_ptr,
        app::MoonTimeline* timeline,
        app::TimelineEntityRecord* record
    )
    IL2CPP_REGISTER_METHOD(0x007F5C80, void, ctor, app::GlobalBrightnessAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::IMoonTypeResolver*, GetResolverForType_1, app::GlobalBrightnessAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::IMoonTypeResolver*, GetResolverForType_2, app::GlobalBrightnessAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::IMoonTypeResolver*, GetResolverForType_3, app::GlobalBrightnessAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::IMoonTypeResolver*, GetResolverForType_4, app::GlobalBrightnessAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::IMoonTypeResolver*, GetResolverForType_5, app::GlobalBrightnessAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::IMoonTypeResolver*, GetResolverForType_6, app::GlobalBrightnessAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::IMoonTypeResolver*, GetResolverForType_7, app::GlobalBrightnessAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::IMoonTypeResolver*, GetResolverForType_8, app::GlobalBrightnessAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::IMoonTypeResolver*, GetResolverForType_9, app::GlobalBrightnessAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::IMoonTypeResolver*, GetResolverForType_10, app::GlobalBrightnessAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::IMoonTypeResolver*, GetResolverForType_11, app::GlobalBrightnessAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::IMoonTypeResolver*, GetResolverForType_12, app::GlobalBrightnessAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::IMoonTypeResolver*, GetResolverForType_13, app::GlobalBrightnessAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::IMoonTypeResolver*, GetResolverForType_14, app::GlobalBrightnessAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::IMoonTypeResolver*, GetResolverForType_15, app::GlobalBrightnessAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::IMoonTypeResolver*, GetResolverForType_16, app::GlobalBrightnessAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::IMoonTypeResolver*, GetResolverForType_17, app::GlobalBrightnessAnimator* this_ptr)
} // namespace app::classes::GlobalBrightnessAnimator
