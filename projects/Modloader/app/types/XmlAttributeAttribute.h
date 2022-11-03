#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlAttributeAttribute {
        inline app::XmlAttributeAttribute__Class** type_info = (app::XmlAttributeAttribute__Class**)(modloader::win::memory::resolve_rva(0x0478C698));
        inline app::XmlAttributeAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlAttributeAttribute__Class>(type_info, "System.Xml.Serialization", "XmlAttributeAttribute");
        }
        inline app::XmlAttributeAttribute* create() {
            return il2cpp::create_object<app::XmlAttributeAttribute>(get_class());
        }
    } // namespace XmlAttributeAttribute
} // namespace app::classes::types
