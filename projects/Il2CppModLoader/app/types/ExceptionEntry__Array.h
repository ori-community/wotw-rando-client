#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExceptionEntry__Array {
        namespace {
            app::ExceptionEntry__Array__Class* type_info_ref = nullptr;
        }
        app::ExceptionEntry__Array__Class** type_info = &type_info_ref;
        inline app::ExceptionEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::ExceptionEntry__Array__Class>(type_info, "Moon.ExceptionProcessing", "ExceptionEntry[]");
        }
        inline app::ExceptionEntry__Array* create() {
            return il2cpp::create_object<app::ExceptionEntry__Array>(get_class());
        }
    } // namespace ExceptionEntry__Array
} // namespace app::classes::types
