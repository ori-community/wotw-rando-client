#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlAnyConverter__Class.h>
#include <Modloader/app/structs/XmlAnyConverter.h>

namespace app::classes::types {
    namespace XmlAnyConverter {
        inline app::XmlAnyConverter__Class** type_info = (app::XmlAnyConverter__Class**)(modloader::win::memory::resolve_rva(0x0470EA10));
        inline app::XmlAnyConverter__Class* get_class() {
            return il2cpp::get_class<app::XmlAnyConverter__Class>(type_info, "System.Xml.Schema", "XmlAnyConverter");
        }
        inline app::XmlAnyConverter* create() {
            return il2cpp::create_object<app::XmlAnyConverter>(get_class());
        }
    } // namespace XmlAnyConverter
} // namespace app::classes::types
