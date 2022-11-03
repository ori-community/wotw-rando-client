#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlNodeType__Enum {
        inline app::XmlNodeType__Enum__Class** type_info = (app::XmlNodeType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0473C080));
        inline app::XmlNodeType__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlNodeType__Enum__Class>(type_info, "System.Xml", "XmlNodeType");
        }
        inline app::XmlNodeType__Enum* create() {
            return il2cpp::create_object<app::XmlNodeType__Enum>(get_class());
        }
    } // namespace XmlNodeType__Enum
} // namespace app::classes::types
