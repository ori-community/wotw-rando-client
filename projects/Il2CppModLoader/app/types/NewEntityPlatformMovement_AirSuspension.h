#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NewEntityPlatformMovement_AirSuspension {
        inline app::NewEntityPlatformMovement_AirSuspension__Class** type_info = (app::NewEntityPlatformMovement_AirSuspension__Class**)(modloader::win::memory::resolve_rva(0x047437E8));
        inline app::NewEntityPlatformMovement_AirSuspension__Class* get_class() {
            return il2cpp::get_nested_class<app::NewEntityPlatformMovement_AirSuspension__Class>(type_info, "", "NewEntityPlatformMovement", "AirSuspension");
        }
        inline app::NewEntityPlatformMovement_AirSuspension* create() {
            return il2cpp::create_object<app::NewEntityPlatformMovement_AirSuspension>(get_class());
        }
    } // namespace NewEntityPlatformMovement_AirSuspension
} // namespace app::classes::types
