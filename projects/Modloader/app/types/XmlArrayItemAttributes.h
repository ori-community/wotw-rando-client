#pragma once
#include <Modloader/app/structs/XmlArrayItemAttributes.h>
#include <Modloader/app/structs/XmlArrayItemAttributes__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlArrayItemAttributes {
        inline app::XmlArrayItemAttributes__Class** type_info() {
            static app::XmlArrayItemAttributes__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlArrayItemAttributes__Class**)(modloader::win::memory::resolve_rva(0x04783990));
            }
            return cache;
        }
        inline app::XmlArrayItemAttributes__Class* get_class() {
            return il2cpp::get_class<app::XmlArrayItemAttributes__Class>(type_info(), "System.Xml.Serialization", "XmlArrayItemAttributes");
        }
        inline app::XmlArrayItemAttributes* create() {
            return il2cpp::create_object<app::XmlArrayItemAttributes>(get_class());
        }
    } // namespace XmlArrayItemAttributes
} // namespace app::classes::types
