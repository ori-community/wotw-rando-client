#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeCode__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypeCode__Enum__Class** type_info;
        inline app::TypeCode__Enum__Class* get_class() {
            return il2cpp::get_class<app::TypeCode__Enum__Class>(type_info, "System", "TypeCode");
        }
        inline app::TypeCode__Enum* create() {
            return il2cpp::create_object<app::TypeCode__Enum>(get_class());
        }
        inline app::TypeCode__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::TypeCode__Enum__Array>(get_class(), size);
        }
        inline app::TypeCode__Enum__Array* create_array(const std::vector<app::TypeCode__Enum*>& items) {
            return il2cpp::array_new<app::TypeCode__Enum__Array>(get_class(), items);
        }
    } // namespace TypeCode__Enum
} // namespace app::classes::types
