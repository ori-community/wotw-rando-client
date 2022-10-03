#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Platform {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Platform__Class** type_info;
        inline app::Platform__Class* get_class() {
            return il2cpp::get_class<app::Platform__Class>(type_info, "System", "Platform");
        }
        inline app::Platform* create() {
            return il2cpp::create_object<app::Platform>(get_class());
        }
    } // namespace Platform
} // namespace app::classes::types
