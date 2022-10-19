#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XElementAttributePropertyDescriptor {
        inline app::XElementAttributePropertyDescriptor__Class** type_info = (app::XElementAttributePropertyDescriptor__Class**)(modloader::win::memory::resolve_rva(0x047909C0));
        inline app::XElementAttributePropertyDescriptor__Class* get_class() {
            return il2cpp::get_class<app::XElementAttributePropertyDescriptor__Class>(type_info, "MS.Internal.Xml.Linq.ComponentModel", "XElementAttributePropertyDescriptor");
        }
        inline app::XElementAttributePropertyDescriptor* create() {
            return il2cpp::create_object<app::XElementAttributePropertyDescriptor>(get_class());
        }
    } // namespace XElementAttributePropertyDescriptor
} // namespace app::classes::types
