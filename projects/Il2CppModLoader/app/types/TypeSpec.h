#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeSpec {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypeSpec__Class** type_info;
        inline app::TypeSpec__Class* get_class() {
            return il2cpp::get_class<app::TypeSpec__Class>(type_info, "System", "TypeSpec");
        }
        inline app::TypeSpec* create() {
            return il2cpp::create_object<app::TypeSpec>(get_class());
        }
        inline app::TypeSpec__Array* create_array(int size) {
            return il2cpp::array_new<app::TypeSpec__Array>(get_class(), size);
        }
    } // namespace TypeSpec
} // namespace app::classes::types
