#pragma once
#include <Modloader/app/structs/XmlIgnoreAttribute.h>
#include <Modloader/app/structs/XmlIgnoreAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlIgnoreAttribute {
        inline app::XmlIgnoreAttribute__Class** type_info() {
            static app::XmlIgnoreAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlIgnoreAttribute__Class**)(modloader::win::memory::resolve_rva(0x04787F40));
            }
            return cache;
        }
        inline app::XmlIgnoreAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlIgnoreAttribute__Class>(type_info(), "System.Xml.Serialization", "XmlIgnoreAttribute");
        }
        inline app::XmlIgnoreAttribute* create() {
            return il2cpp::create_object<app::XmlIgnoreAttribute>(get_class());
        }
    } // namespace XmlIgnoreAttribute
} // namespace app::classes::types
