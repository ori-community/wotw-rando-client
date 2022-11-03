#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ArtBuildController {
    IL2CPP_REGISTER_METHOD(0x0083FD30, void, Awake, (app::ArtBuildController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0083FF80, app::IEnumerator*, LoadScreenshots, (app::ArtBuildController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008400D0, void, FixedUpdate, (app::ArtBuildController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00840710, void, LoadSceneAtIndex, (app::ArtBuildController * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00840830, void, EnableDimmer, (app::ArtBuildController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00840940, void, DisableDimmer, (app::ArtBuildController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00840A50, void, ctor, (app::ArtBuildController * this_ptr))
} // namespace app::classes::ArtBuildController
