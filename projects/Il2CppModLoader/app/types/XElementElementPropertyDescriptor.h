#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XElementElementPropertyDescriptor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XElementElementPropertyDescriptor__Class** type_info;
        inline app::XElementElementPropertyDescriptor__Class* get_class() {
            return il2cpp::get_class<app::XElementElementPropertyDescriptor__Class>(type_info, "MS.Internal.Xml.Linq.ComponentModel", "XElementElementPropertyDescriptor");
        }
        inline app::XElementElementPropertyDescriptor* create() {
            return il2cpp::create_object<app::XElementElementPropertyDescriptor>(get_class());
        }
    } // namespace XElementElementPropertyDescriptor
} // namespace app::classes::types
