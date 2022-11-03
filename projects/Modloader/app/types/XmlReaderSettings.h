#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlReaderSettings {
        inline app::XmlReaderSettings__Class** type_info = (app::XmlReaderSettings__Class**)(modloader::win::memory::resolve_rva(0x0475BE48));
        inline app::XmlReaderSettings__Class* get_class() {
            return il2cpp::get_class<app::XmlReaderSettings__Class>(type_info, "System.Xml", "XmlReaderSettings");
        }
        inline app::XmlReaderSettings* create() {
            return il2cpp::create_object<app::XmlReaderSettings>(get_class());
        }
    } // namespace XmlReaderSettings
} // namespace app::classes::types
