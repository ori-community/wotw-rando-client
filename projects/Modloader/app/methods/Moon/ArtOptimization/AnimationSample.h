#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::ArtOptimization::AnimationSample {
    IL2CPP_REGISTER_METHOD(0x0133E4D0, void, ctor, (app::AnimationSample * this_ptr, float shader_time))
    IL2CPP_REGISTER_METHOD(0x0133E660, void, AddAnimationSample, (app::AnimationSample * this_ptr, int32_t index, app::Sample* sample))
    IL2CPP_REGISTER_METHODINFO(0x04740480, AnimationSample_AddAnimationSample__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0133E8D0, app::Sample*, GetMasterSample, (app::AnimationSample * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0133E970, void, CleanUp, (app::AnimationSample * this_ptr))
} // namespace app::classes::Moon::ArtOptimization::AnimationSample
