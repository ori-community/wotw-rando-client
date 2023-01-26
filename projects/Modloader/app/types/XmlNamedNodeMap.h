#pragma once
#include <Modloader/app/structs/XmlNamedNodeMap.h>
#include <Modloader/app/structs/XmlNamedNodeMap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlNamedNodeMap {
        inline app::XmlNamedNodeMap__Class** type_info() {
            static app::XmlNamedNodeMap__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlNamedNodeMap__Class**)(modloader::win::memory::resolve_rva(0x047251B0));
            }
            return cache;
        }
        inline app::XmlNamedNodeMap__Class* get_class() {
            return il2cpp::get_class<app::XmlNamedNodeMap__Class>(type_info(), "System.Xml", "XmlNamedNodeMap");
        }
        inline app::XmlNamedNodeMap* create() {
            return il2cpp::create_object<app::XmlNamedNodeMap>(get_class());
        }
    } // namespace XmlNamedNodeMap
} // namespace app::classes::types
