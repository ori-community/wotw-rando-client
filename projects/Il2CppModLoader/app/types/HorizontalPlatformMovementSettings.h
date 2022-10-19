#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace HorizontalPlatformMovementSettings {
        inline app::HorizontalPlatformMovementSettings__Class** type_info = (app::HorizontalPlatformMovementSettings__Class**)(modloader::win::memory::resolve_rva(0x0475E988));
        inline app::HorizontalPlatformMovementSettings__Class* get_class() {
            return il2cpp::get_class<app::HorizontalPlatformMovementSettings__Class>(type_info, "", "HorizontalPlatformMovementSettings");
        }
        inline app::HorizontalPlatformMovementSettings* create() {
            return il2cpp::create_object<app::HorizontalPlatformMovementSettings>(get_class());
        }
    } // namespace HorizontalPlatformMovementSettings
} // namespace app::classes::types
