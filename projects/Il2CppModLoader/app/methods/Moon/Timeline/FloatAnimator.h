#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Timeline::FloatAnimator {
    IL2CPP_REGISTER_METHOD(0x013E41D0, float, get_CurrentValue, (app::FloatAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00623260, float, get_Time, (app::FloatAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00623270, void, set_Time, (app::FloatAnimator * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00777A20, void, OnStartPlayback, (app::FloatAnimator * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x013E4250, void, OnUpdateEntity, (app::FloatAnimator * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x0076F300, void, SynchronizeData, (app::FloatAnimator * this_ptr, app::MoonTimeline * timeline, app::TimelineEntityRecord * record))
    IL2CPP_REGISTER_METHOD(0x01BBFE00, void, ctor, (app::FloatAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::IMoonTypeResolver *, GetResolverForType_1, (app::FloatAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::IMoonTypeResolver *, GetResolverForType_2, (app::FloatAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::IMoonTypeResolver *, GetResolverForType_3, (app::FloatAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::IMoonTypeResolver *, GetResolverForType_4, (app::FloatAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::IMoonTypeResolver *, GetResolverForType_5, (app::FloatAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::IMoonTypeResolver *, GetResolverForType_6, (app::FloatAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::IMoonTypeResolver *, GetResolverForType_7, (app::FloatAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::IMoonTypeResolver *, GetResolverForType_8, (app::FloatAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::IMoonTypeResolver *, GetResolverForType_9, (app::FloatAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::IMoonTypeResolver *, GetResolverForType_10, (app::FloatAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::IMoonTypeResolver *, GetResolverForType_11, (app::FloatAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::IMoonTypeResolver *, GetResolverForType_12, (app::FloatAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::IMoonTypeResolver *, GetResolverForType_13, (app::FloatAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::IMoonTypeResolver *, GetResolverForType_14, (app::FloatAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::IMoonTypeResolver *, GetResolverForType_15, (app::FloatAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::IMoonTypeResolver *, GetResolverForType_16, (app::FloatAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::IMoonTypeResolver *, GetResolverForType_17, (app::FloatAnimator * this_ptr))
}
