#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlArrayItemAttribute__Class.h>
#include <Modloader/app/structs/XmlArrayItemAttribute.h>

namespace app::classes::types {
    namespace XmlArrayItemAttribute {
        inline app::XmlArrayItemAttribute__Class** type_info = (app::XmlArrayItemAttribute__Class**)(modloader::win::memory::resolve_rva(0x0474A7D8));
        inline app::XmlArrayItemAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlArrayItemAttribute__Class>(type_info, "System.Xml.Serialization", "XmlArrayItemAttribute");
        }
        inline app::XmlArrayItemAttribute* create() {
            return il2cpp::create_object<app::XmlArrayItemAttribute>(get_class());
        }
    } // namespace XmlArrayItemAttribute
} // namespace app::classes::types
