#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlUntypedConverter {
        inline app::XmlUntypedConverter__Class** type_info = (app::XmlUntypedConverter__Class**)(modloader::win::memory::resolve_rva(0x0474EE10));
        inline app::XmlUntypedConverter__Class* get_class() {
            return il2cpp::get_class<app::XmlUntypedConverter__Class>(type_info, "System.Xml.Schema", "XmlUntypedConverter");
        }
        inline app::XmlUntypedConverter* create() {
            return il2cpp::create_object<app::XmlUntypedConverter>(get_class());
        }
    } // namespace XmlUntypedConverter
} // namespace app::classes::types
