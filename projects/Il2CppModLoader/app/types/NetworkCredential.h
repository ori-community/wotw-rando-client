#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NetworkCredential {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NetworkCredential__Class** type_info;
        inline app::NetworkCredential__Class* get_class() {
            return il2cpp::get_class<app::NetworkCredential__Class>(type_info, "System.Net", "NetworkCredential");
        }
        inline app::NetworkCredential* create() {
            return il2cpp::create_object<app::NetworkCredential>(get_class());
        }
    } // namespace NetworkCredential
} // namespace app::classes::types
