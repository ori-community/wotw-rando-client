#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PropertyTabAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PropertyTabAttribute__Class** type_info;
        inline app::PropertyTabAttribute__Class* get_class() {
            return il2cpp::get_class<app::PropertyTabAttribute__Class>(type_info, "System.ComponentModel", "PropertyTabAttribute");
        }
        inline app::PropertyTabAttribute* create() {
            return il2cpp::create_object<app::PropertyTabAttribute>(get_class());
        }
    } // namespace PropertyTabAttribute
} // namespace app::classes::types
