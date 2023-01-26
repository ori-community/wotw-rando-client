#pragma once
#include <Modloader/app/structs/XmlTypeSerializationSource.h>
#include <Modloader/app/structs/XmlTypeSerializationSource__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlTypeSerializationSource {
        inline app::XmlTypeSerializationSource__Class** type_info() {
            static app::XmlTypeSerializationSource__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlTypeSerializationSource__Class**)(modloader::win::memory::resolve_rva(0x047601E0));
            }
            return cache;
        }
        inline app::XmlTypeSerializationSource__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeSerializationSource__Class>(type_info(), "System.Xml.Serialization", "XmlTypeSerializationSource");
        }
        inline app::XmlTypeSerializationSource* create() {
            return il2cpp::create_object<app::XmlTypeSerializationSource>(get_class());
        }
    } // namespace XmlTypeSerializationSource
} // namespace app::classes::types
