#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SHA384Managed {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SHA384Managed__Class** type_info;
        inline app::SHA384Managed__Class* get_class() {
            return il2cpp::get_class<app::SHA384Managed__Class>(type_info, "System.Security.Cryptography", "SHA384Managed");
        }
        inline app::SHA384Managed* create() {
            return il2cpp::create_object<app::SHA384Managed>(get_class());
        }
    } // namespace SHA384Managed
} // namespace app::classes::types
