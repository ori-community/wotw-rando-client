#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XElementXmlPropertyDescriptor {
        inline app::XElementXmlPropertyDescriptor__Class** type_info = (app::XElementXmlPropertyDescriptor__Class**)(modloader::win::memory::resolve_rva(0x047848C0));
        inline app::XElementXmlPropertyDescriptor__Class* get_class() {
            return il2cpp::get_class<app::XElementXmlPropertyDescriptor__Class>(type_info, "MS.Internal.Xml.Linq.ComponentModel", "XElementXmlPropertyDescriptor");
        }
        inline app::XElementXmlPropertyDescriptor* create() {
            return il2cpp::create_object<app::XElementXmlPropertyDescriptor>(get_class());
        }
    } // namespace XElementXmlPropertyDescriptor
} // namespace app::classes::types
