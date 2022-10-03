#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExpandoClass {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExpandoClass__Class** type_info;
        inline app::ExpandoClass__Class* get_class() {
            return il2cpp::get_class<app::ExpandoClass__Class>(type_info, "System.Dynamic", "ExpandoClass");
        }
        inline app::ExpandoClass* create() {
            return il2cpp::create_object<app::ExpandoClass>(get_class());
        }
    } // namespace ExpandoClass
} // namespace app::classes::types
