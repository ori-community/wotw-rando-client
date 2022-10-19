#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GravityPlatformMovementSettings {
        inline app::GravityPlatformMovementSettings__Class** type_info = (app::GravityPlatformMovementSettings__Class**)(modloader::win::memory::resolve_rva(0x04717C90));
        inline app::GravityPlatformMovementSettings__Class* get_class() {
            return il2cpp::get_class<app::GravityPlatformMovementSettings__Class>(type_info, "", "GravityPlatformMovementSettings");
        }
        inline app::GravityPlatformMovementSettings* create() {
            return il2cpp::create_object<app::GravityPlatformMovementSettings>(get_class());
        }
    } // namespace GravityPlatformMovementSettings
} // namespace app::classes::types
