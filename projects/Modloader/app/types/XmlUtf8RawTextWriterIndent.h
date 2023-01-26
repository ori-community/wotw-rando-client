#pragma once
#include <Modloader/app/structs/XmlUtf8RawTextWriterIndent.h>
#include <Modloader/app/structs/XmlUtf8RawTextWriterIndent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlUtf8RawTextWriterIndent {
        inline app::XmlUtf8RawTextWriterIndent__Class** type_info() {
            static app::XmlUtf8RawTextWriterIndent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlUtf8RawTextWriterIndent__Class**)(modloader::win::memory::resolve_rva(0x0471E4A0));
            }
            return cache;
        }
        inline app::XmlUtf8RawTextWriterIndent__Class* get_class() {
            return il2cpp::get_class<app::XmlUtf8RawTextWriterIndent__Class>(type_info(), "System.Xml", "XmlUtf8RawTextWriterIndent");
        }
        inline app::XmlUtf8RawTextWriterIndent* create() {
            return il2cpp::create_object<app::XmlUtf8RawTextWriterIndent>(get_class());
        }
    } // namespace XmlUtf8RawTextWriterIndent
} // namespace app::classes::types
