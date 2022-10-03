#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LocalizableAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LocalizableAttribute__Class** type_info;
        inline app::LocalizableAttribute__Class* get_class() {
            return il2cpp::get_class<app::LocalizableAttribute__Class>(type_info, "System.ComponentModel", "LocalizableAttribute");
        }
        inline app::LocalizableAttribute* create() {
            return il2cpp::create_object<app::LocalizableAttribute>(get_class());
        }
    } // namespace LocalizableAttribute
} // namespace app::classes::types
