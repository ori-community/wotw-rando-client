#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlArrayItemAttributes {
        inline app::XmlArrayItemAttributes__Class** type_info = (app::XmlArrayItemAttributes__Class**)(modloader::win::memory::resolve_rva(0x04783990));
        inline app::XmlArrayItemAttributes__Class* get_class() {
            return il2cpp::get_class<app::XmlArrayItemAttributes__Class>(type_info, "System.Xml.Serialization", "XmlArrayItemAttributes");
        }
        inline app::XmlArrayItemAttributes* create() {
            return il2cpp::create_object<app::XmlArrayItemAttributes>(get_class());
        }
    } // namespace XmlArrayItemAttributes
} // namespace app::classes::types
