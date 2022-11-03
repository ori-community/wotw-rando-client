#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlRawWriter {
        inline app::XmlRawWriter__Class** type_info = (app::XmlRawWriter__Class**)(modloader::win::memory::resolve_rva(0x04783988));
        inline app::XmlRawWriter__Class* get_class() {
            return il2cpp::get_class<app::XmlRawWriter__Class>(type_info, "System.Xml", "XmlRawWriter");
        }
        inline app::XmlRawWriter* create() {
            return il2cpp::create_object<app::XmlRawWriter>(get_class());
        }
    } // namespace XmlRawWriter
} // namespace app::classes::types
