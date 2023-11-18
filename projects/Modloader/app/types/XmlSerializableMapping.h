#pragma once
#include <Modloader/app/structs/XmlSerializableMapping.h>
#include <Modloader/app/structs/XmlSerializableMapping__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSerializableMapping {
        inline app::XmlSerializableMapping__Class** type_info() {
            static app::XmlSerializableMapping__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSerializableMapping__Class**)(modloader::win::memory::resolve_rva(0x04726B50));
            }
            return cache;
        }
        inline app::XmlSerializableMapping__Class* get_class() {
            return il2cpp::get_class<app::XmlSerializableMapping__Class>(type_info(), "System.Xml.Serialization", "XmlSerializableMapping");
        }
        inline app::XmlSerializableMapping* create() {
            return il2cpp::create_object<app::XmlSerializableMapping>(get_class());
        }
    } // namespace XmlSerializableMapping
} // namespace app::classes::types
