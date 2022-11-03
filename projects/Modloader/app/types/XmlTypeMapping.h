#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlTypeMapping {
        inline app::XmlTypeMapping__Class** type_info = (app::XmlTypeMapping__Class**)(modloader::win::memory::resolve_rva(0x04738680));
        inline app::XmlTypeMapping__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeMapping__Class>(type_info, "System.Xml.Serialization", "XmlTypeMapping");
        }
        inline app::XmlTypeMapping* create() {
            return il2cpp::create_object<app::XmlTypeMapping>(get_class());
        }
    } // namespace XmlTypeMapping
} // namespace app::classes::types
