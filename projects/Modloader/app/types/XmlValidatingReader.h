#pragma once
#include <Modloader/app/structs/XmlValidatingReader.h>
#include <Modloader/app/structs/XmlValidatingReader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlValidatingReader {
        inline app::XmlValidatingReader__Class** type_info() {
            static app::XmlValidatingReader__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlValidatingReader__Class**)(modloader::win::memory::resolve_rva(0x04719870));
            }
            return cache;
        }
        inline app::XmlValidatingReader__Class* get_class() {
            return il2cpp::get_class<app::XmlValidatingReader__Class>(type_info(), "System.Xml", "XmlValidatingReader");
        }
        inline app::XmlValidatingReader* create() {
            return il2cpp::create_object<app::XmlValidatingReader>(get_class());
        }
    } // namespace XmlValidatingReader
} // namespace app::classes::types
