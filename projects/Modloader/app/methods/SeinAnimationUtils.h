#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/AnimationPostprocess.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>

namespace app::classes::SeinAnimationUtils {
    IL2CPP_REGISTER_METHOD(0x00D84B90, void, Play_1, (app::String * name, app::Action* on_stop_playing, app::Func_1_Boolean_* condition))
    IL2CPP_REGISTER_METHOD(0x00D84CB0, app::ActiveAnimationHandle, Play_2, (app::MoonAnimation * animation, app::Action* on_stop_playing, app::Func_1_Boolean_* condition, int32_t layer))
    IL2CPP_REGISTER_METHOD(0x00D84E00, void, AddPostprocess, (app::AnimationPostprocess * postprocess, float blend_in_time))
    IL2CPP_REGISTER_METHOD(0x00D84F00, void, RemovePostprocess, (app::AnimationPostprocess * postprocess, float blend_out_time))
    IL2CPP_REGISTER_METHOD(0x00D85000, void, SetParameter, (app::FloatAnimationParameter * animation_parameter, float value))
    IL2CPP_REGISTER_METHOD(0x00D85100, void, PlayLoop, (app::String * name, app::Func_1_Boolean_* condition, app::Action* on_stop_playing))
} // namespace app::classes::SeinAnimationUtils
