#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Int64Enum__Enum__Array {
        namespace {
            app::Int64Enum__Enum__Array__Class* type_info_ref = nullptr;
        }
        app::Int64Enum__Enum__Array__Class** type_info = &type_info_ref;
        inline app::Int64Enum__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::Int64Enum__Enum__Array__Class>(type_info, "System", "Int64Enum[]");
        }
        inline app::Int64Enum__Enum__Array* create() {
            return il2cpp::create_object<app::Int64Enum__Enum__Array>(get_class());
        }
    } // namespace Int64Enum__Enum__Array
} // namespace app::classes::types
