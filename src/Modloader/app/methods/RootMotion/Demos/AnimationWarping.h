#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimationWarping.h>

namespace app::classes::RootMotion::Demos::AnimationWarping {
    IL2CPP_REGISTER_METHOD(0x022085F0, void, Start, app::AnimationWarping* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02208610, float, GetWarpWeight, app::AnimationWarping* this_ptr, int32_t warp_index)
    IL2CPP_REGISTER_METHOD(0x022088B0, void, OnModifyOffset, app::AnimationWarping* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02208ED0, void, OnDisable, app::AnimationWarping* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008A2C20, void, ctor, app::AnimationWarping* this_ptr)
} // namespace app::classes::RootMotion::Demos::AnimationWarping
