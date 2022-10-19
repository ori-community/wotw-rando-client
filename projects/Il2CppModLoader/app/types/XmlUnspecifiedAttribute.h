#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlUnspecifiedAttribute {
        inline app::XmlUnspecifiedAttribute__Class** type_info = (app::XmlUnspecifiedAttribute__Class**)(modloader::win::memory::resolve_rva(0x047374E0));
        inline app::XmlUnspecifiedAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlUnspecifiedAttribute__Class>(type_info, "System.Xml", "XmlUnspecifiedAttribute");
        }
        inline app::XmlUnspecifiedAttribute* create() {
            return il2cpp::create_object<app::XmlUnspecifiedAttribute>(get_class());
        }
    } // namespace XmlUnspecifiedAttribute
} // namespace app::classes::types
