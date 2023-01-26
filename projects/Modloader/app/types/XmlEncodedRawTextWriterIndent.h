#pragma once
#include <Modloader/app/structs/XmlEncodedRawTextWriterIndent.h>
#include <Modloader/app/structs/XmlEncodedRawTextWriterIndent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlEncodedRawTextWriterIndent {
        inline app::XmlEncodedRawTextWriterIndent__Class** type_info() {
            static app::XmlEncodedRawTextWriterIndent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlEncodedRawTextWriterIndent__Class**)(modloader::win::memory::resolve_rva(0x04771110));
            }
            return cache;
        }
        inline app::XmlEncodedRawTextWriterIndent__Class* get_class() {
            return il2cpp::get_class<app::XmlEncodedRawTextWriterIndent__Class>(type_info(), "System.Xml", "XmlEncodedRawTextWriterIndent");
        }
        inline app::XmlEncodedRawTextWriterIndent* create() {
            return il2cpp::create_object<app::XmlEncodedRawTextWriterIndent>(get_class());
        }
    } // namespace XmlEncodedRawTextWriterIndent
} // namespace app::classes::types
