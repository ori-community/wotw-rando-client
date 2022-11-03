#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlReader {
        inline app::XmlReader__Class** type_info = (app::XmlReader__Class**)(modloader::win::memory::resolve_rva(0x047813E0));
        inline app::XmlReader__Class* get_class() {
            return il2cpp::get_class<app::XmlReader__Class>(type_info, "System.Xml", "XmlReader");
        }
        inline app::XmlReader* create() {
            return il2cpp::create_object<app::XmlReader>(get_class());
        }
    } // namespace XmlReader
} // namespace app::classes::types
