#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlAnyElementAttribute {
        inline app::XmlAnyElementAttribute__Class** type_info = (app::XmlAnyElementAttribute__Class**)(modloader::win::memory::resolve_rva(0x04727C70));
        inline app::XmlAnyElementAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlAnyElementAttribute__Class>(type_info, "System.Xml.Serialization", "XmlAnyElementAttribute");
        }
        inline app::XmlAnyElementAttribute* create() {
            return il2cpp::create_object<app::XmlAnyElementAttribute>(get_class());
        }
    } // namespace XmlAnyElementAttribute
} // namespace app::classes::types
