#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlIgnoreAttribute__Class.h>
#include <Modloader/app/structs/XmlIgnoreAttribute.h>

namespace app::classes::types {
    namespace XmlIgnoreAttribute {
        inline app::XmlIgnoreAttribute__Class** type_info = (app::XmlIgnoreAttribute__Class**)(modloader::win::memory::resolve_rva(0x04787F40));
        inline app::XmlIgnoreAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlIgnoreAttribute__Class>(type_info, "System.Xml.Serialization", "XmlIgnoreAttribute");
        }
        inline app::XmlIgnoreAttribute* create() {
            return il2cpp::create_object<app::XmlIgnoreAttribute>(get_class());
        }
    } // namespace XmlIgnoreAttribute
} // namespace app::classes::types
