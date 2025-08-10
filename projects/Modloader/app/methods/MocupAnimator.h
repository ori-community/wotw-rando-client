#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MocupAnimator.h>

namespace app::classes::MocupAnimator {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, app::MocupAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SampleValue, app::MocupAnimator* this_ptr, float value, bool force_sample)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, app::MocupAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0132F470, float, get_Duration, app::MocupAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, app::MocupAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0132F5D0, void, ctor, app::MocupAnimator* this_ptr)
} // namespace app::classes::MocupAnimator
