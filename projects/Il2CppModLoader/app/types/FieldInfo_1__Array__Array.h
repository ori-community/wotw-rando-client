#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FieldInfo_1__Array__Array {
        namespace {
            app::FieldInfo_1__Array__Array__Class* type_info_ref = nullptr;
        }
        app::FieldInfo_1__Array__Array__Class** type_info = &type_info_ref;
        inline app::FieldInfo_1__Array__Array__Class* get_class() {
            return il2cpp::get_class<app::FieldInfo_1__Array__Array__Class>(type_info, "System.Reflection", "FieldInfo[][]");
        }
        inline app::FieldInfo_1__Array__Array* create() {
            return il2cpp::create_object<app::FieldInfo_1__Array__Array>(get_class());
        }
    } // namespace FieldInfo_1__Array__Array
} // namespace app::classes::types
