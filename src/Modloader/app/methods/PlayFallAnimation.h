#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/PlayFallAnimation.h>

namespace app::classes::PlayFallAnimation {
    IL2CPP_REGISTER_METHOD(0x01179380, void, Perform, app::PlayFallAnimation* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x01179580, bool, ShouldFallAnimationKeepPlaying, app::PlayFallAnimation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::PlayFallAnimation* this_ptr)
} // namespace app::classes::PlayFallAnimation
