#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlTextAttribute {
        inline app::XmlTextAttribute__Class** type_info = (app::XmlTextAttribute__Class**)(modloader::win::memory::resolve_rva(0x047163C8));
        inline app::XmlTextAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlTextAttribute__Class>(type_info, "System.Xml.Serialization", "XmlTextAttribute");
        }
        inline app::XmlTextAttribute* create() {
            return il2cpp::create_object<app::XmlTextAttribute>(get_class());
        }
    } // namespace XmlTextAttribute
} // namespace app::classes::types
