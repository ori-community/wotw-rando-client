#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Skybox.h>

namespace app::classes::UnityEngine::Skybox {
    IL2CPP_REGISTER_METHOD(0x02C60B60, app::Material*, get_material, (app::Skybox * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C60BB0, void, set_material, (app::Skybox * this_ptr, app::Material* value))
} // namespace app::classes::UnityEngine::Skybox
