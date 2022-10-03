#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LocalVariable__Array {
        namespace {
            app::LocalVariable__Array__Class* type_info_ref = nullptr;
        }
        app::LocalVariable__Array__Class** type_info = &type_info_ref;
        inline app::LocalVariable__Array__Class* get_class() {
            return il2cpp::get_class<app::LocalVariable__Array__Class>(type_info, "System.Linq.Expressions.Interpreter", "LocalVariable[]");
        }
        inline app::LocalVariable__Array* create() {
            return il2cpp::create_object<app::LocalVariable__Array>(get_class());
        }
    } // namespace LocalVariable__Array
} // namespace app::classes::types
