#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NewEntityPlatformMovement_AirSuspension {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NewEntityPlatformMovement_AirSuspension__Class** type_info;
        inline app::NewEntityPlatformMovement_AirSuspension__Class* get_class() {
            return il2cpp::get_nested_class<app::NewEntityPlatformMovement_AirSuspension__Class>(type_info, "", "NewEntityPlatformMovement", "AirSuspension");
        }
        inline app::NewEntityPlatformMovement_AirSuspension* create() {
            return il2cpp::create_object<app::NewEntityPlatformMovement_AirSuspension>(get_class());
        }
    } // namespace NewEntityPlatformMovement_AirSuspension
} // namespace app::classes::types
