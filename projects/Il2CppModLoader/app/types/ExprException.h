#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExprException {
        namespace {
            inline app::ExprException__Class* type_info_ref = nullptr;
        }
        inline app::ExprException__Class** type_info = &type_info_ref;
        inline app::ExprException__Class* get_class() {
            return il2cpp::get_class<app::ExprException__Class>(type_info, "System.Data", "ExprException");
        }
        inline app::ExprException* create() {
            return il2cpp::create_object<app::ExprException>(get_class());
        }
    } // namespace ExprException
} // namespace app::classes::types
