#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XElementElementsPropertyDescriptor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XElementElementsPropertyDescriptor__Class** type_info;
        inline app::XElementElementsPropertyDescriptor__Class* get_class() {
            return il2cpp::get_class<app::XElementElementsPropertyDescriptor__Class>(type_info, "MS.Internal.Xml.Linq.ComponentModel", "XElementElementsPropertyDescriptor");
        }
        inline app::XElementElementsPropertyDescriptor* create() {
            return il2cpp::create_object<app::XElementElementsPropertyDescriptor>(get_class());
        }
    } // namespace XElementElementsPropertyDescriptor
} // namespace app::classes::types
