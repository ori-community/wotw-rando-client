#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LoadSceneParameters__Boxed.h>
#include <Modloader/app/structs/LoadSceneMode__Enum.h>
#include <Modloader/app/structs/LocalPhysicsMode__Enum.h>

namespace app::classes::UnityEngine::SceneManagement::LoadSceneParameters {
    IL2CPP_REGISTER_METHOD(0x00218590, void, ctor_1, (app::LoadSceneParameters__Boxed * this_ptr, app::LoadSceneMode__Enum mode))
    IL2CPP_REGISTER_METHOD(0x00115520, void, ctor_2, (app::LoadSceneParameters__Boxed * this_ptr, app::LoadSceneMode__Enum mode, app::LocalPhysicsMode__Enum physics_mode))
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, set_loadSceneMode, (app::LoadSceneParameters__Boxed * this_ptr, app::LoadSceneMode__Enum value))
    IL2CPP_REGISTER_METHOD(0x00113CF0, void, set_localPhysicsMode, (app::LoadSceneParameters__Boxed * this_ptr, app::LocalPhysicsMode__Enum value))
} // namespace app::classes::UnityEngine::SceneManagement::LoadSceneParameters
