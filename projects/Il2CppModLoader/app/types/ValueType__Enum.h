#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ValueType__Enum {
        namespace {
            app::ValueType__Enum__Class* type_info_ref = nullptr;
        }
        app::ValueType__Enum__Class** type_info = &type_info_ref;
        inline app::ValueType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ValueType__Enum__Class>(type_info, "System.Data", "ValueType");
        }
        inline app::ValueType__Enum* create() {
            return il2cpp::create_object<app::ValueType__Enum>(get_class());
        }
    } // namespace ValueType__Enum
} // namespace app::classes::types
