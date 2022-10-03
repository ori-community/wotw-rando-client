#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DefaultValueAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DefaultValueAttribute__Class** type_info;
        inline app::DefaultValueAttribute__Class* get_class() {
            return il2cpp::get_class<app::DefaultValueAttribute__Class>(type_info, "System.ComponentModel", "DefaultValueAttribute");
        }
        inline app::DefaultValueAttribute* create() {
            return il2cpp::create_object<app::DefaultValueAttribute>(get_class());
        }
    } // namespace DefaultValueAttribute
} // namespace app::classes::types
