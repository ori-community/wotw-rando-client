#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlElementAttributes {
        inline app::XmlElementAttributes__Class** type_info = (app::XmlElementAttributes__Class**)(modloader::win::memory::resolve_rva(0x04747418));
        inline app::XmlElementAttributes__Class* get_class() {
            return il2cpp::get_class<app::XmlElementAttributes__Class>(type_info, "System.Xml.Serialization", "XmlElementAttributes");
        }
        inline app::XmlElementAttributes* create() {
            return il2cpp::create_object<app::XmlElementAttributes>(get_class());
        }
    } // namespace XmlElementAttributes
} // namespace app::classes::types
