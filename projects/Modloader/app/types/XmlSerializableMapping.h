#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSerializableMapping {
        inline app::XmlSerializableMapping__Class** type_info = (app::XmlSerializableMapping__Class**)(modloader::win::memory::resolve_rva(0x04726B50));
        inline app::XmlSerializableMapping__Class* get_class() {
            return il2cpp::get_class<app::XmlSerializableMapping__Class>(type_info, "System.Xml.Serialization", "XmlSerializableMapping");
        }
        inline app::XmlSerializableMapping* create() {
            return il2cpp::create_object<app::XmlSerializableMapping>(get_class());
        }
    } // namespace XmlSerializableMapping
} // namespace app::classes::types
