#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlListConverter__Class.h>
#include <Modloader/app/structs/XmlListConverter.h>

namespace app::classes::types {
    namespace XmlListConverter {
        inline app::XmlListConverter__Class** type_info = (app::XmlListConverter__Class**)(modloader::win::memory::resolve_rva(0x0472AB88));
        inline app::XmlListConverter__Class* get_class() {
            return il2cpp::get_class<app::XmlListConverter__Class>(type_info, "System.Xml.Schema", "XmlListConverter");
        }
        inline app::XmlListConverter* create() {
            return il2cpp::create_object<app::XmlListConverter>(get_class());
        }
    } // namespace XmlListConverter
} // namespace app::classes::types
