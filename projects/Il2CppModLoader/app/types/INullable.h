#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace INullable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::INullable__Class** type_info;
        inline app::INullable__Class* get_class() {
            return il2cpp::get_class<app::INullable__Class>(type_info, "System.Data.SqlTypes", "INullable");
        }
        inline app::INullable* create() {
            return il2cpp::create_object<app::INullable>(get_class());
        }
    } // namespace INullable
} // namespace app::classes::types
