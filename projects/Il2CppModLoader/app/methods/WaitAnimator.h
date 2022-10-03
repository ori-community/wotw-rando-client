#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::WaitAnimator {
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Func_2_IContext_Boolean_*, get_CodeCondition, (app::WaitAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C5510, bool, get_ConditionSpecified, (app::WaitAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsLooping, (app::WaitAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FD4D0, float, get_Duration, (app::WaitAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C55F0, void, SampleValue, (app::WaitAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x008C58F0, app::BaseAnimator*, GetRootAnimator, (app::WaitAnimator * this_ptr, app::BaseAnimator* base_animator))
    IL2CPP_REGISTER_METHOD(0x008C5920, bool, EvaluateCondition, (app::WaitAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheOriginals, (app::WaitAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RestoreToOriginalState, (app::WaitAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C5A70, void, ctor, (app::WaitAnimator * this_ptr))
} // namespace app::classes::WaitAnimator
