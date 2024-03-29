#pragma once
#include <Modloader/app/structs/XmlTypeAttribute.h>
#include <Modloader/app/structs/XmlTypeAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlTypeAttribute {
        inline app::XmlTypeAttribute__Class** type_info() {
            static app::XmlTypeAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlTypeAttribute__Class**)(modloader::win::memory::resolve_rva(0x0475D980));
            }
            return cache;
        }
        inline app::XmlTypeAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeAttribute__Class>(type_info(), "System.Xml.Serialization", "XmlTypeAttribute");
        }
        inline app::XmlTypeAttribute* create() {
            return il2cpp::create_object<app::XmlTypeAttribute>(get_class());
        }
    } // namespace XmlTypeAttribute
} // namespace app::classes::types
