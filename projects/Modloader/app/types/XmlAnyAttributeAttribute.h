#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlAnyAttributeAttribute {
        inline app::XmlAnyAttributeAttribute__Class** type_info = (app::XmlAnyAttributeAttribute__Class**)(modloader::win::memory::resolve_rva(0x0470EB78));
        inline app::XmlAnyAttributeAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlAnyAttributeAttribute__Class>(type_info, "System.Xml.Serialization", "XmlAnyAttributeAttribute");
        }
        inline app::XmlAnyAttributeAttribute* create() {
            return il2cpp::create_object<app::XmlAnyAttributeAttribute>(get_class());
        }
    } // namespace XmlAnyAttributeAttribute
} // namespace app::classes::types
