#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SecurityDocument {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SecurityDocument__Class** type_info;
        inline app::SecurityDocument__Class* get_class() {
            return il2cpp::get_class<app::SecurityDocument__Class>(type_info, "System.Security", "SecurityDocument");
        }
        inline app::SecurityDocument* create() {
            return il2cpp::create_object<app::SecurityDocument>(get_class());
        }
    } // namespace SecurityDocument
} // namespace app::classes::types
