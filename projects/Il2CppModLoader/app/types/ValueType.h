#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ValueType {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ValueType__Class** type_info;
        inline app::ValueType__Class* get_class() {
            return il2cpp::get_class<app::ValueType__Class>(type_info, "System", "ValueType");
        }
        inline app::ValueType* create() {
            return il2cpp::create_object<app::ValueType>(get_class());
        }
    } // namespace ValueType
} // namespace app::classes::types
