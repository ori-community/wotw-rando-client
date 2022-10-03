#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinPlatformMovement {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinPlatformMovement__Class** type_info;
        inline app::SeinPlatformMovement__Class* get_class() {
            return il2cpp::get_class<app::SeinPlatformMovement__Class>(type_info, "", "SeinPlatformMovement");
        }
        inline app::SeinPlatformMovement* create() {
            return il2cpp::create_object<app::SeinPlatformMovement>(get_class());
        }
    } // namespace SeinPlatformMovement
} // namespace app::classes::types
