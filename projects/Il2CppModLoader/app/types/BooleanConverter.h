#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BooleanConverter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BooleanConverter__Class** type_info;
        inline app::BooleanConverter__Class* get_class() {
            return il2cpp::get_class<app::BooleanConverter__Class>(type_info, "System.ComponentModel", "BooleanConverter");
        }
        inline app::BooleanConverter* create() {
            return il2cpp::create_object<app::BooleanConverter>(get_class());
        }
    } // namespace BooleanConverter
} // namespace app::classes::types
