#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlQualifiedName_HashCodeOfStringDelegate {
        inline app::XmlQualifiedName_HashCodeOfStringDelegate__Class** type_info = (app::XmlQualifiedName_HashCodeOfStringDelegate__Class**)(modloader::win::memory::resolve_rva(0x04783C20));
        inline app::XmlQualifiedName_HashCodeOfStringDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlQualifiedName_HashCodeOfStringDelegate__Class>(type_info, "System.Xml", "XmlQualifiedName", "HashCodeOfStringDelegate");
        }
        inline app::XmlQualifiedName_HashCodeOfStringDelegate* create() {
            return il2cpp::create_object<app::XmlQualifiedName_HashCodeOfStringDelegate>(get_class());
        }
    } // namespace XmlQualifiedName_HashCodeOfStringDelegate
} // namespace app::classes::types
