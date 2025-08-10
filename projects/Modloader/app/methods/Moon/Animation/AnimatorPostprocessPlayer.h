#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimatorPostprocessPlayer.h>
#include <Modloader/app/structs/UpdateType__Enum.h>

namespace app::classes::Moon::Animation::AnimatorPostprocessPlayer {
    IL2CPP_REGISTER_METHOD(0x00597B10, app::UpdateType__Enum, get_UpdateType, app::AnimatorPostprocessPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B00450, void, OnEnable, app::AnimatorPostprocessPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B00530, void, OnDisable, app::AnimatorPostprocessPlayer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01B00620, void, OnUpdate, app::AnimatorPostprocessPlayer* this_ptr, float delta)
    IL2CPP_REGISTER_METHOD(0x01B007F0, void, ctor, app::AnimatorPostprocessPlayer* this_ptr)
} // namespace app::classes::Moon::Animation::AnimatorPostprocessPlayer
