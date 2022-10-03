#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SecurityElement_SecurityAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SecurityElement_SecurityAttribute__Class** type_info;
        inline app::SecurityElement_SecurityAttribute__Class* get_class() {
            return il2cpp::get_nested_class<app::SecurityElement_SecurityAttribute__Class>(type_info, "System.Security", "SecurityElement", "SecurityAttribute");
        }
        inline app::SecurityElement_SecurityAttribute* create() {
            return il2cpp::create_object<app::SecurityElement_SecurityAttribute>(get_class());
        }
    } // namespace SecurityElement_SecurityAttribute
} // namespace app::classes::types
