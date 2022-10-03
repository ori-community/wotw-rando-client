#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExtenderProvidedPropertyAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExtenderProvidedPropertyAttribute__Class** type_info;
        inline app::ExtenderProvidedPropertyAttribute__Class* get_class() {
            return il2cpp::get_class<app::ExtenderProvidedPropertyAttribute__Class>(type_info, "System.ComponentModel", "ExtenderProvidedPropertyAttribute");
        }
        inline app::ExtenderProvidedPropertyAttribute* create() {
            return il2cpp::create_object<app::ExtenderProvidedPropertyAttribute>(get_class());
        }
    } // namespace ExtenderProvidedPropertyAttribute
} // namespace app::classes::types
