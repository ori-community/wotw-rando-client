#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::FadeWhileSceneLoading {
    IL2CPP_REGISTER_METHOD(0x0098FAC0, void, FixedUpdate, (app::FadeWhileSceneLoading * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0098FD80, app::SceneManagerScene*, GetScene, (app::FadeWhileSceneLoading * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::FadeWhileSceneLoading * this_ptr))
} // namespace app::classes::FadeWhileSceneLoading
