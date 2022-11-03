#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TextureAnimationWithTransitions {
    IL2CPP_REGISTER_METHOD(0x010E9EE0, app::TextureAnimationWithTransitions_TextureAnimationPair*, GetTransition, (app::TextureAnimationWithTransitions * this_ptr, int32_t current_frame, app::TextureAnimationWithTransitions* from, app::TextureAnimation* from_animation, bool flip))
    IL2CPP_REGISTER_METHOD(0x010EA170, void, ctor, (app::TextureAnimationWithTransitions * this_ptr))
} // namespace app::classes::TextureAnimationWithTransitions
