#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XElementXmlPropertyDescriptor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XElementXmlPropertyDescriptor__Class** type_info;
        inline app::XElementXmlPropertyDescriptor__Class* get_class() {
            return il2cpp::get_class<app::XElementXmlPropertyDescriptor__Class>(type_info, "MS.Internal.Xml.Linq.ComponentModel", "XElementXmlPropertyDescriptor");
        }
        inline app::XElementXmlPropertyDescriptor* create() {
            return il2cpp::create_object<app::XElementXmlPropertyDescriptor>(get_class());
        }
    } // namespace XElementXmlPropertyDescriptor
} // namespace app::classes::types
