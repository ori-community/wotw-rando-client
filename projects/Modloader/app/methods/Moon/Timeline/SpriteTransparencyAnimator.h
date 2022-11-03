#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Timeline::SpriteTransparencyAnimator {
    IL2CPP_REGISTER_METHOD(0x01E821C0, void, OnStartPlayback, (app::SpriteTransparencyAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01E822E0, void, OnUpdateEntity, (app::SpriteTransparencyAnimator * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x01E82360, void, SampleTransparency, (app::SpriteTransparencyAnimator * this_ptr, app::SpriteRenderer* sprite_renderer, float time))
    IL2CPP_REGISTER_METHOD(0x01E82530, void, ctor, (app::SpriteTransparencyAnimator * this_ptr))
} // namespace app::classes::Moon::Timeline::SpriteTransparencyAnimator
