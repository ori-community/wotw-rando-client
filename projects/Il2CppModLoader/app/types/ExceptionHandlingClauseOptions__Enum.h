#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExceptionHandlingClauseOptions__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExceptionHandlingClauseOptions__Enum__Class** type_info;
        inline app::ExceptionHandlingClauseOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::ExceptionHandlingClauseOptions__Enum__Class>(type_info, "System.Reflection", "ExceptionHandlingClauseOptions");
        }
        inline app::ExceptionHandlingClauseOptions__Enum* create() {
            return il2cpp::create_object<app::ExceptionHandlingClauseOptions__Enum>(get_class());
        }
    } // namespace ExceptionHandlingClauseOptions__Enum
} // namespace app::classes::types
