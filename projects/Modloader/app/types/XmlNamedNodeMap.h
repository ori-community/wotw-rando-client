#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlNamedNodeMap {
        inline app::XmlNamedNodeMap__Class** type_info = (app::XmlNamedNodeMap__Class**)(modloader::win::memory::resolve_rva(0x047251B0));
        inline app::XmlNamedNodeMap__Class* get_class() {
            return il2cpp::get_class<app::XmlNamedNodeMap__Class>(type_info, "System.Xml", "XmlNamedNodeMap");
        }
        inline app::XmlNamedNodeMap* create() {
            return il2cpp::create_object<app::XmlNamedNodeMap>(get_class());
        }
    } // namespace XmlNamedNodeMap
} // namespace app::classes::types
