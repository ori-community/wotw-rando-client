#pragma once
#include <Modloader/app/structs/XmlReaderSettings.h>
#include <Modloader/app/structs/XmlReaderSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlReaderSettings {
        inline app::XmlReaderSettings__Class** type_info() {
            static app::XmlReaderSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlReaderSettings__Class**)(modloader::win::memory::resolve_rva(0x0475BE48));
            }
            return cache;
        }
        inline app::XmlReaderSettings__Class* get_class() {
            return il2cpp::get_class<app::XmlReaderSettings__Class>(type_info(), "System.Xml", "XmlReaderSettings");
        }
        inline app::XmlReaderSettings* create() {
            return il2cpp::create_object<app::XmlReaderSettings>(get_class());
        }
    } // namespace XmlReaderSettings
} // namespace app::classes::types
