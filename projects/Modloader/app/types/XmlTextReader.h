#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlTextReader {
        inline app::XmlTextReader__Class** type_info = (app::XmlTextReader__Class**)(modloader::win::memory::resolve_rva(0x047249E8));
        inline app::XmlTextReader__Class* get_class() {
            return il2cpp::get_class<app::XmlTextReader__Class>(type_info, "System.Xml", "XmlTextReader");
        }
        inline app::XmlTextReader* create() {
            return il2cpp::create_object<app::XmlTextReader>(get_class());
        }
    } // namespace XmlTextReader
} // namespace app::classes::types
