#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlMiscConverter {
        inline app::XmlMiscConverter__Class** type_info = (app::XmlMiscConverter__Class**)(modloader::win::memory::resolve_rva(0x0475AE58));
        inline app::XmlMiscConverter__Class* get_class() {
            return il2cpp::get_class<app::XmlMiscConverter__Class>(type_info, "System.Xml.Schema", "XmlMiscConverter");
        }
        inline app::XmlMiscConverter* create() {
            return il2cpp::create_object<app::XmlMiscConverter>(get_class());
        }
    } // namespace XmlMiscConverter
} // namespace app::classes::types
