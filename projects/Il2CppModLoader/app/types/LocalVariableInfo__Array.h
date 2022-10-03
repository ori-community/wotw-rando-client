#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LocalVariableInfo__Array {
        namespace {
            app::LocalVariableInfo__Array__Class* type_info_ref = nullptr;
        }
        app::LocalVariableInfo__Array__Class** type_info = &type_info_ref;
        inline app::LocalVariableInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::LocalVariableInfo__Array__Class>(type_info, "System.Reflection", "LocalVariableInfo[]");
        }
        inline app::LocalVariableInfo__Array* create() {
            return il2cpp::create_object<app::LocalVariableInfo__Array>(get_class());
        }
    } // namespace LocalVariableInfo__Array
} // namespace app::classes::types
