#pragma once
#include <Modloader/app/structs/XmlRawWriterBase64Encoder.h>
#include <Modloader/app/structs/XmlRawWriterBase64Encoder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlRawWriterBase64Encoder {
        inline app::XmlRawWriterBase64Encoder__Class** type_info() {
            static app::XmlRawWriterBase64Encoder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlRawWriterBase64Encoder__Class**)(modloader::win::memory::resolve_rva(0x04709F78));
            }
            return cache;
        }
        inline app::XmlRawWriterBase64Encoder__Class* get_class() {
            return il2cpp::get_class<app::XmlRawWriterBase64Encoder__Class>(type_info(), "System.Xml", "XmlRawWriterBase64Encoder");
        }
        inline app::XmlRawWriterBase64Encoder* create() {
            return il2cpp::create_object<app::XmlRawWriterBase64Encoder>(get_class());
        }
    } // namespace XmlRawWriterBase64Encoder
} // namespace app::classes::types
