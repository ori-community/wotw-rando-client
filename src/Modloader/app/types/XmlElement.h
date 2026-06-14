#pragma once
#include <Modloader/app/structs/XmlElement.h>
#include <Modloader/app/structs/XmlElement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlElement {
        inline app::XmlElement__Class** type_info() {
            static app::XmlElement__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlElement__Class**)(modloader::win::memory::resolve_rva(0x04721088));
            }
            return cache;
        }
        inline app::XmlElement__Class* get_class() {
            return il2cpp::get_class<app::XmlElement__Class>(type_info(), "System.Xml", "XmlElement");
        }
        inline app::XmlElement* create() {
            return il2cpp::create_object<app::XmlElement>(get_class());
        }
    } // namespace XmlElement
} // namespace app::classes::types
