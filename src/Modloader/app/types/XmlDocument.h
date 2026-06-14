#pragma once
#include <Modloader/app/structs/XmlDocument.h>
#include <Modloader/app/structs/XmlDocument__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlDocument {
        inline app::XmlDocument__Class** type_info() {
            static app::XmlDocument__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlDocument__Class**)(modloader::win::memory::resolve_rva(0x04731178));
            }
            return cache;
        }
        inline app::XmlDocument__Class* get_class() {
            return il2cpp::get_class<app::XmlDocument__Class>(type_info(), "System.Xml", "XmlDocument");
        }
        inline app::XmlDocument* create() {
            return il2cpp::create_object<app::XmlDocument>(get_class());
        }
    } // namespace XmlDocument
} // namespace app::classes::types
