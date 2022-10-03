#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XElementValuePropertyDescriptor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XElementValuePropertyDescriptor__Class** type_info;
        inline app::XElementValuePropertyDescriptor__Class* get_class() {
            return il2cpp::get_class<app::XElementValuePropertyDescriptor__Class>(type_info, "MS.Internal.Xml.Linq.ComponentModel", "XElementValuePropertyDescriptor");
        }
        inline app::XElementValuePropertyDescriptor* create() {
            return il2cpp::create_object<app::XElementValuePropertyDescriptor>(get_class());
        }
    } // namespace XElementValuePropertyDescriptor
} // namespace app::classes::types
