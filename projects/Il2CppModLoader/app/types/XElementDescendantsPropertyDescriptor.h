#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XElementDescendantsPropertyDescriptor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XElementDescendantsPropertyDescriptor__Class** type_info;
        inline app::XElementDescendantsPropertyDescriptor__Class* get_class() {
            return il2cpp::get_class<app::XElementDescendantsPropertyDescriptor__Class>(type_info, "MS.Internal.Xml.Linq.ComponentModel", "XElementDescendantsPropertyDescriptor");
        }
        inline app::XElementDescendantsPropertyDescriptor* create() {
            return il2cpp::create_object<app::XElementDescendantsPropertyDescriptor>(get_class());
        }
    } // namespace XElementDescendantsPropertyDescriptor
} // namespace app::classes::types
