#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlEncodedRawTextWriterIndent {
        inline app::XmlEncodedRawTextWriterIndent__Class** type_info = (app::XmlEncodedRawTextWriterIndent__Class**)(modloader::win::memory::resolve_rva(0x04771110));
        inline app::XmlEncodedRawTextWriterIndent__Class* get_class() {
            return il2cpp::get_class<app::XmlEncodedRawTextWriterIndent__Class>(type_info, "System.Xml", "XmlEncodedRawTextWriterIndent");
        }
        inline app::XmlEncodedRawTextWriterIndent* create() {
            return il2cpp::create_object<app::XmlEncodedRawTextWriterIndent>(get_class());
        }
    } // namespace XmlEncodedRawTextWriterIndent
} // namespace app::classes::types
