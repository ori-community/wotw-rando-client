#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Timeline::SceneLoadingEntity {
    IL2CPP_REGISTER_METHOD(0x00783C60, void, OnStartPlayback, (app::SceneLoadingEntity * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00783DE0, void, OnStopPlayback, (app::SceneLoadingEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00783EC0, void, OnUpdateEntity, (app::SceneLoadingEntity * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00783F80, void, OnValidate, (app::SceneLoadingEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007840A0, void, ctor, (app::SceneLoadingEntity * this_ptr))
}
