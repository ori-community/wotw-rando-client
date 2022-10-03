#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AttributeProviderAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AttributeProviderAttribute__Class** type_info;
        inline app::AttributeProviderAttribute__Class* get_class() {
            return il2cpp::get_class<app::AttributeProviderAttribute__Class>(type_info, "System.ComponentModel", "AttributeProviderAttribute");
        }
        inline app::AttributeProviderAttribute* create() {
            return il2cpp::create_object<app::AttributeProviderAttribute>(get_class());
        }
    } // namespace AttributeProviderAttribute
} // namespace app::classes::types
