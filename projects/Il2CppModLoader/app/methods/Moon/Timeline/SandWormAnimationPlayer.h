#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Timeline::SandWormAnimationPlayer {
    IL2CPP_REGISTER_METHOD(0x00781AF0, void, OnStartPlayback, (app::SandWormAnimationPlayer * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00781BE0, void, OnUpdateEntity, (app::SandWormAnimationPlayer * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00781CD0, void, OnStopPlayback, (app::SandWormAnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00781D10, bool, HasFinished, (app::SandWormAnimationPlayer * this_ptr, int32_t event_id))
    IL2CPP_REGISTER_METHOD(0x00781D70, void, ctor, (app::SandWormAnimationPlayer * this_ptr))
}
