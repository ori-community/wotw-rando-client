#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Animation::DirectionalHitReactionPostprocess {
    IL2CPP_REGISTER_METHOD(0x003FF7B0, int32_t, get_Order, (app::DirectionalHitReactionPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B01B10, float, get_Duration, (app::DirectionalHitReactionPostprocess * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B01C70, void, Play, (app::DirectionalHitReactionPostprocess * this_ptr, app::Vector3 direction, float strength_multiplier))
    IL2CPP_REGISTER_METHOD(0x01B01CD0, void, Process, (app::DirectionalHitReactionPostprocess * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x01B02080, void, ctor, (app::DirectionalHitReactionPostprocess * this_ptr))
} // namespace app::classes::Moon::Animation::DirectionalHitReactionPostprocess
