#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSerializationWriter {
        inline app::XmlSerializationWriter__Class** type_info = (app::XmlSerializationWriter__Class**)(modloader::win::memory::resolve_rva(0x04795F58));
        inline app::XmlSerializationWriter__Class* get_class() {
            return il2cpp::get_class<app::XmlSerializationWriter__Class>(type_info, "System.Xml.Serialization", "XmlSerializationWriter");
        }
        inline app::XmlSerializationWriter* create() {
            return il2cpp::create_object<app::XmlSerializationWriter>(get_class());
        }
    } // namespace XmlSerializationWriter
} // namespace app::classes::types
