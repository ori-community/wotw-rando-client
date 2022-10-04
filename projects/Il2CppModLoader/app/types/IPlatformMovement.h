#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPlatformMovement {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPlatformMovement__Class** type_info;
        inline app::IPlatformMovement__Class* get_class() {
            return il2cpp::get_class<app::IPlatformMovement__Class>(type_info, "", "IPlatformMovement");
        }
        inline app::IPlatformMovement* create() {
            return il2cpp::create_object<app::IPlatformMovement>(get_class());
        }
    } // namespace IPlatformMovement
} // namespace app::classes::types
