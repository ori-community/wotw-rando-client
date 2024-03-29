#pragma once
#include <Modloader/app/structs/XmlAutoDetectWriter.h>
#include <Modloader/app/structs/XmlAutoDetectWriter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlAutoDetectWriter {
        inline app::XmlAutoDetectWriter__Class** type_info() {
            static app::XmlAutoDetectWriter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlAutoDetectWriter__Class**)(modloader::win::memory::resolve_rva(0x04781DB8));
            }
            return cache;
        }
        inline app::XmlAutoDetectWriter__Class* get_class() {
            return il2cpp::get_class<app::XmlAutoDetectWriter__Class>(type_info(), "System.Xml", "XmlAutoDetectWriter");
        }
        inline app::XmlAutoDetectWriter* create() {
            return il2cpp::create_object<app::XmlAutoDetectWriter>(get_class());
        }
    } // namespace XmlAutoDetectWriter
} // namespace app::classes::types
