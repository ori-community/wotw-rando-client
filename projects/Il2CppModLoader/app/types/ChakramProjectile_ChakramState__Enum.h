#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChakramProjectile_ChakramState__Enum {
        namespace {
            app::ChakramProjectile_ChakramState__Enum__Class* type_info_ref = nullptr;
        }
        app::ChakramProjectile_ChakramState__Enum__Class** type_info = &type_info_ref;
        inline app::ChakramProjectile_ChakramState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ChakramProjectile_ChakramState__Enum__Class>(type_info, "", "ChakramProjectile", "ChakramState");
        }
        inline app::ChakramProjectile_ChakramState__Enum* create() {
            return il2cpp::create_object<app::ChakramProjectile_ChakramState__Enum>(get_class());
        }
    } // namespace ChakramProjectile_ChakramState__Enum
} // namespace app::classes::types
