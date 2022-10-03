#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExceptionProcessor_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExceptionProcessor_c__Class** type_info;
        inline app::ExceptionProcessor_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ExceptionProcessor_c__Class>(type_info, "Moon.ExceptionProcessing", "ExceptionProcessor", "<>c");
        }
        inline app::ExceptionProcessor_c* create() {
            return il2cpp::create_object<app::ExceptionProcessor_c>(get_class());
        }
    } // namespace ExceptionProcessor_c
} // namespace app::classes::types
