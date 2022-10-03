#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SHA384 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SHA384__Class** type_info;
        inline app::SHA384__Class* get_class() {
            return il2cpp::get_class<app::SHA384__Class>(type_info, "System.Security.Cryptography", "SHA384");
        }
        inline app::SHA384* create() {
            return il2cpp::create_object<app::SHA384>(get_class());
        }
    } // namespace SHA384
} // namespace app::classes::types
