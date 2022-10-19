#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XAttributeValuePropertyDescriptor {
        inline app::XAttributeValuePropertyDescriptor__Class** type_info = (app::XAttributeValuePropertyDescriptor__Class**)(modloader::win::memory::resolve_rva(0x0477E3A8));
        inline app::XAttributeValuePropertyDescriptor__Class* get_class() {
            return il2cpp::get_class<app::XAttributeValuePropertyDescriptor__Class>(type_info, "MS.Internal.Xml.Linq.ComponentModel", "XAttributeValuePropertyDescriptor");
        }
        inline app::XAttributeValuePropertyDescriptor* create() {
            return il2cpp::create_object<app::XAttributeValuePropertyDescriptor>(get_class());
        }
    } // namespace XAttributeValuePropertyDescriptor
} // namespace app::classes::types
