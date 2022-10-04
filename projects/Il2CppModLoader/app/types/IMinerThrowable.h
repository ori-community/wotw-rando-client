#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IMinerThrowable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IMinerThrowable__Class** type_info;
        inline app::IMinerThrowable__Class* get_class() {
            return il2cpp::get_class<app::IMinerThrowable__Class>(type_info, "", "IMinerThrowable");
        }
        inline app::IMinerThrowable* create() {
            return il2cpp::create_object<app::IMinerThrowable>(get_class());
        }
    } // namespace IMinerThrowable
} // namespace app::classes::types
