#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlTypeAttribute {
        inline app::XmlTypeAttribute__Class** type_info = (app::XmlTypeAttribute__Class**)(modloader::win::memory::resolve_rva(0x0475D980));
        inline app::XmlTypeAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeAttribute__Class>(type_info, "System.Xml.Serialization", "XmlTypeAttribute");
        }
        inline app::XmlTypeAttribute* create() {
            return il2cpp::create_object<app::XmlTypeAttribute>(get_class());
        }
    } // namespace XmlTypeAttribute
} // namespace app::classes::types
