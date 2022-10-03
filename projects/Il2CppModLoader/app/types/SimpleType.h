#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SimpleType {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SimpleType__Class** type_info;
        inline app::SimpleType__Class* get_class() {
            return il2cpp::get_class<app::SimpleType__Class>(type_info, "System.Data", "SimpleType");
        }
        inline app::SimpleType* create() {
            return il2cpp::create_object<app::SimpleType>(get_class());
        }
    } // namespace SimpleType
} // namespace app::classes::types
