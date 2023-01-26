#pragma once
#include <Modloader/app/structs/XmlTextWriterBase64Encoder.h>
#include <Modloader/app/structs/XmlTextWriterBase64Encoder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlTextWriterBase64Encoder {
        inline app::XmlTextWriterBase64Encoder__Class** type_info() {
            static app::XmlTextWriterBase64Encoder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlTextWriterBase64Encoder__Class**)(modloader::win::memory::resolve_rva(0x04700940));
            }
            return cache;
        }
        inline app::XmlTextWriterBase64Encoder__Class* get_class() {
            return il2cpp::get_class<app::XmlTextWriterBase64Encoder__Class>(type_info(), "System.Xml", "XmlTextWriterBase64Encoder");
        }
        inline app::XmlTextWriterBase64Encoder* create() {
            return il2cpp::create_object<app::XmlTextWriterBase64Encoder>(get_class());
        }
    } // namespace XmlTextWriterBase64Encoder
} // namespace app::classes::types
