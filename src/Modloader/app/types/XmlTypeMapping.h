#pragma once
#include <Modloader/app/structs/XmlTypeMapping.h>
#include <Modloader/app/structs/XmlTypeMapping__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlTypeMapping {
        inline app::XmlTypeMapping__Class** type_info() {
            static app::XmlTypeMapping__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlTypeMapping__Class**)(modloader::win::memory::resolve_rva(0x04738680));
            }
            return cache;
        }
        inline app::XmlTypeMapping__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeMapping__Class>(type_info(), "System.Xml.Serialization", "XmlTypeMapping");
        }
        inline app::XmlTypeMapping* create() {
            return il2cpp::create_object<app::XmlTypeMapping>(get_class());
        }
    } // namespace XmlTypeMapping
} // namespace app::classes::types
