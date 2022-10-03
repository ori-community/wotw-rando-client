#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace X509Stores {
        extern IL2CPP_MODLOADER_DLLEXPORT app::X509Stores__Class** type_info;
        inline app::X509Stores__Class* get_class() {
            return il2cpp::get_class<app::X509Stores__Class>(type_info, "Mono.Security.X509", "X509Stores");
        }
        inline app::X509Stores* create() {
            return il2cpp::create_object<app::X509Stores>(get_class());
        }
    } // namespace X509Stores
} // namespace app::classes::types
