#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlTypeSerializationSource {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlTypeSerializationSource__Class** type_info;
        inline app::XmlTypeSerializationSource__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeSerializationSource__Class>(type_info, "System.Xml.Serialization", "XmlTypeSerializationSource");
        }
        inline app::XmlTypeSerializationSource* create() {
            return il2cpp::create_object<app::XmlTypeSerializationSource>(get_class());
        }
    } // namespace XmlTypeSerializationSource
} // namespace app::classes::types
