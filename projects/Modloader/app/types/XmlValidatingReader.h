#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlValidatingReader {
        inline app::XmlValidatingReader__Class** type_info = (app::XmlValidatingReader__Class**)(modloader::win::memory::resolve_rva(0x04719870));
        inline app::XmlValidatingReader__Class* get_class() {
            return il2cpp::get_class<app::XmlValidatingReader__Class>(type_info, "System.Xml", "XmlValidatingReader");
        }
        inline app::XmlValidatingReader* create() {
            return il2cpp::create_object<app::XmlValidatingReader>(get_class());
        }
    } // namespace XmlValidatingReader
} // namespace app::classes::types
