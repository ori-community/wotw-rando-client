#pragma once
#include <Modloader/app/structs/XmlUtf8RawTextWriter.h>
#include <Modloader/app/structs/XmlUtf8RawTextWriter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlUtf8RawTextWriter {
        inline app::XmlUtf8RawTextWriter__Class** type_info() {
            static app::XmlUtf8RawTextWriter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlUtf8RawTextWriter__Class**)(modloader::win::memory::resolve_rva(0x0478E3F0));
            }
            return cache;
        }
        inline app::XmlUtf8RawTextWriter__Class* get_class() {
            return il2cpp::get_class<app::XmlUtf8RawTextWriter__Class>(type_info(), "System.Xml", "XmlUtf8RawTextWriter");
        }
        inline app::XmlUtf8RawTextWriter* create() {
            return il2cpp::create_object<app::XmlUtf8RawTextWriter>(get_class());
        }
    } // namespace XmlUtf8RawTextWriter
} // namespace app::classes::types
