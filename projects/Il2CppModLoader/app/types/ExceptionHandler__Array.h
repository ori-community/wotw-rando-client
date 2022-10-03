#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExceptionHandler__Array {
        namespace {
            app::ExceptionHandler__Array__Class* type_info_ref = nullptr;
        }
        app::ExceptionHandler__Array__Class** type_info = &type_info_ref;
        inline app::ExceptionHandler__Array__Class* get_class() {
            return il2cpp::get_class<app::ExceptionHandler__Array__Class>(type_info, "System.Linq.Expressions.Interpreter", "ExceptionHandler[]");
        }
        inline app::ExceptionHandler__Array* create() {
            return il2cpp::create_object<app::ExceptionHandler__Array>(get_class());
        }
    } // namespace ExceptionHandler__Array
} // namespace app::classes::types
