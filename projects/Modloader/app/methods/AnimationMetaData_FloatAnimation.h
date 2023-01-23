#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AnimationMetaData_FloatAnimation.h>

namespace app::classes::AnimationMetaData_FloatAnimation {
    IL2CPP_REGISTER_METHOD(0x004FE9B0, float, GetValueAtFrame, (app::AnimationMetaData_FloatAnimation * this_ptr, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x004FEB40, float, GetValueAtTime, (app::AnimationMetaData_FloatAnimation * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x004FECE0, float, GetRawValueAtTime, (app::AnimationMetaData_FloatAnimation * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x004FEE10, float, GetRawValueAtFrame, (app::AnimationMetaData_FloatAnimation * this_ptr, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x004FEEC0, void, ctor, (app::AnimationMetaData_FloatAnimation * this_ptr))
} // namespace app::classes::AnimationMetaData_FloatAnimation
