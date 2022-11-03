#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlWellFormedWriter {
        inline app::XmlWellFormedWriter__Class** type_info = (app::XmlWellFormedWriter__Class**)(modloader::win::memory::resolve_rva(0x04745358));
        inline app::XmlWellFormedWriter__Class* get_class() {
            return il2cpp::get_class<app::XmlWellFormedWriter__Class>(type_info, "System.Xml", "XmlWellFormedWriter");
        }
        inline app::XmlWellFormedWriter* create() {
            return il2cpp::create_object<app::XmlWellFormedWriter>(get_class());
        }
    } // namespace XmlWellFormedWriter
} // namespace app::classes::types
