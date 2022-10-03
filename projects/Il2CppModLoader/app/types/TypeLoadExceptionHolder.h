#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeLoadExceptionHolder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypeLoadExceptionHolder__Class** type_info;
        inline app::TypeLoadExceptionHolder__Class* get_class() {
            return il2cpp::get_class<app::TypeLoadExceptionHolder__Class>(type_info, "System.Runtime.Serialization", "TypeLoadExceptionHolder");
        }
        inline app::TypeLoadExceptionHolder* create() {
            return il2cpp::create_object<app::TypeLoadExceptionHolder>(get_class());
        }
    } // namespace TypeLoadExceptionHolder
} // namespace app::classes::types
