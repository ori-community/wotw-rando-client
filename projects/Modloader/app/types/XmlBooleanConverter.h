#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlBooleanConverter {
        inline app::XmlBooleanConverter__Class** type_info = (app::XmlBooleanConverter__Class**)(modloader::win::memory::resolve_rva(0x0478DE68));
        inline app::XmlBooleanConverter__Class* get_class() {
            return il2cpp::get_class<app::XmlBooleanConverter__Class>(type_info, "System.Xml.Schema", "XmlBooleanConverter");
        }
        inline app::XmlBooleanConverter* create() {
            return il2cpp::create_object<app::XmlBooleanConverter>(get_class());
        }
    } // namespace XmlBooleanConverter
} // namespace app::classes::types
