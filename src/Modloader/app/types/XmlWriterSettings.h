#pragma once
#include <Modloader/app/structs/XmlWriterSettings.h>
#include <Modloader/app/structs/XmlWriterSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlWriterSettings {
        inline app::XmlWriterSettings__Class** type_info() {
            static app::XmlWriterSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlWriterSettings__Class**)(modloader::win::memory::resolve_rva(0x04740F80));
            }
            return cache;
        }
        inline app::XmlWriterSettings__Class* get_class() {
            return il2cpp::get_class<app::XmlWriterSettings__Class>(type_info(), "System.Xml", "XmlWriterSettings");
        }
        inline app::XmlWriterSettings* create() {
            return il2cpp::create_object<app::XmlWriterSettings>(get_class());
        }
    } // namespace XmlWriterSettings
} // namespace app::classes::types
