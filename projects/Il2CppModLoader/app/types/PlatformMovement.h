#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlatformMovement {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlatformMovement__Class** type_info;
        inline app::PlatformMovement__Class* get_class() {
            return il2cpp::get_class<app::PlatformMovement__Class>(type_info, "", "PlatformMovement");
        }
        inline app::PlatformMovement* create() {
            return il2cpp::create_object<app::PlatformMovement>(get_class());
        }
    } // namespace PlatformMovement
} // namespace app::classes::types
