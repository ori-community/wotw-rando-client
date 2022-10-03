#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExceptionFilter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExceptionFilter__Class** type_info;
        inline app::ExceptionFilter__Class* get_class() {
            return il2cpp::get_class<app::ExceptionFilter__Class>(type_info, "System.Linq.Expressions.Interpreter", "ExceptionFilter");
        }
        inline app::ExceptionFilter* create() {
            return il2cpp::create_object<app::ExceptionFilter>(get_class());
        }
    } // namespace ExceptionFilter
} // namespace app::classes::types
