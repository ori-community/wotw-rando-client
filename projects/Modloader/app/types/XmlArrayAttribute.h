#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlArrayAttribute__Class.h>
#include <Modloader/app/structs/XmlArrayAttribute.h>

namespace app::classes::types {
    namespace XmlArrayAttribute {
        inline app::XmlArrayAttribute__Class** type_info = (app::XmlArrayAttribute__Class**)(modloader::win::memory::resolve_rva(0x0475C788));
        inline app::XmlArrayAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlArrayAttribute__Class>(type_info, "System.Xml.Serialization", "XmlArrayAttribute");
        }
        inline app::XmlArrayAttribute* create() {
            return il2cpp::create_object<app::XmlArrayAttribute>(get_class());
        }
    } // namespace XmlArrayAttribute
} // namespace app::classes::types
