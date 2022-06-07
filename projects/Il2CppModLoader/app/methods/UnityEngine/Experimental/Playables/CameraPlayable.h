#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Experimental::Playables::CameraPlayable {
    IL2CPP_REGISTER_METHOD(0x001D9980, app::PlayableHandle, GetHandle, (app::CameraPlayable__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EC2D0, bool, Equals, (app::CameraPlayable__Boxed * this_ptr, app::CameraPlayable other))
}
