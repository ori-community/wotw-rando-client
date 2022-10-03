#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SecurityElement {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SecurityElement__Class** type_info;
        inline app::SecurityElement__Class* get_class() {
            return il2cpp::get_class<app::SecurityElement__Class>(type_info, "System.Security", "SecurityElement");
        }
        inline app::SecurityElement* create() {
            return il2cpp::create_object<app::SecurityElement>(get_class());
        }
    } // namespace SecurityElement
} // namespace app::classes::types
