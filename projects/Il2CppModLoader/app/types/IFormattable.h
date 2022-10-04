#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IFormattable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IFormattable__Class** type_info;
        inline app::IFormattable__Class* get_class() {
            return il2cpp::get_class<app::IFormattable__Class>(type_info, "System", "IFormattable");
        }
        inline app::IFormattable* create() {
            return il2cpp::create_object<app::IFormattable>(get_class());
        }
    } // namespace IFormattable
} // namespace app::classes::types
