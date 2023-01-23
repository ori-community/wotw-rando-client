#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CreateSceneParameters__Boxed.h>
#include <Modloader/app/structs/LocalPhysicsMode__Enum.h>

namespace app::classes::UnityEngine::SceneManagement::CreateSceneParameters {
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, ctor, (app::CreateSceneParameters__Boxed * this_ptr, app::LocalPhysicsMode__Enum physics_mode))
}
