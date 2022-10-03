#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DescriptionAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DescriptionAttribute__Class** type_info;
        inline app::DescriptionAttribute__Class* get_class() {
            return il2cpp::get_class<app::DescriptionAttribute__Class>(type_info, "System.ComponentModel", "DescriptionAttribute");
        }
        inline app::DescriptionAttribute* create() {
            return il2cpp::create_object<app::DescriptionAttribute>(get_class());
        }
    } // namespace DescriptionAttribute
} // namespace app::classes::types
