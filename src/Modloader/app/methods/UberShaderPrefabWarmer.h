#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberShaderPrefabWarmer.h>

namespace app::classes::UberShaderPrefabWarmer {
    IL2CPP_REGISTER_METHOD(0x01914880, void, Awake, app::UberShaderPrefabWarmer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::UberShaderPrefabWarmer* this_ptr)
} // namespace app::classes::UberShaderPrefabWarmer
