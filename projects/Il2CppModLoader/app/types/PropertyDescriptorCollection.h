#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PropertyDescriptorCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PropertyDescriptorCollection__Class** type_info;
        inline app::PropertyDescriptorCollection__Class* get_class() {
            return il2cpp::get_class<app::PropertyDescriptorCollection__Class>(type_info, "System.ComponentModel", "PropertyDescriptorCollection");
        }
        inline app::PropertyDescriptorCollection* create() {
            return il2cpp::create_object<app::PropertyDescriptorCollection>(get_class());
        }
    } // namespace PropertyDescriptorCollection
} // namespace app::classes::types
