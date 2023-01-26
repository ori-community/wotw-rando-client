#pragma once
#include <Modloader/app/structs/XmlEncodedRawTextWriter.h>
#include <Modloader/app/structs/XmlEncodedRawTextWriter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlEncodedRawTextWriter {
        inline app::XmlEncodedRawTextWriter__Class** type_info() {
            static app::XmlEncodedRawTextWriter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlEncodedRawTextWriter__Class**)(modloader::win::memory::resolve_rva(0x04707128));
            }
            return cache;
        }
        inline app::XmlEncodedRawTextWriter__Class* get_class() {
            return il2cpp::get_class<app::XmlEncodedRawTextWriter__Class>(type_info(), "System.Xml", "XmlEncodedRawTextWriter");
        }
        inline app::XmlEncodedRawTextWriter* create() {
            return il2cpp::create_object<app::XmlEncodedRawTextWriter>(get_class());
        }
    } // namespace XmlEncodedRawTextWriter
} // namespace app::classes::types
