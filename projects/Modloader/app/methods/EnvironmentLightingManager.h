#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnvironmentLightingManager.h>
#include <Modloader/app/structs/EnvironmentLight.h>
#include <Modloader/app/structs/Rect.h>

namespace app::classes::EnvironmentLightingManager {
    IL2CPP_REGISTER_METHOD(0x00CA8560, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x00CA85E0, void, OnEnable, (app::EnvironmentLightingManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CA8670, app::EnvironmentLight*, GetCharacterLightAtPos, (app::EnvironmentLightingManager * this_ptr, app::Rect bounds))
    IL2CPP_REGISTER_METHOD(0x00CA8870, void, AddLight, (app::EnvironmentLightingManager * this_ptr, app::EnvironmentLight* environment_light))
    IL2CPP_REGISTER_METHOD(0x00CA8950, void, RemoveLight, (app::EnvironmentLightingManager * this_ptr, app::EnvironmentLight* environment_light))
    IL2CPP_REGISTER_METHOD(0x00CA8A50, void, ctor, (app::EnvironmentLightingManager * this_ptr))
} // namespace app::classes::EnvironmentLightingManager
