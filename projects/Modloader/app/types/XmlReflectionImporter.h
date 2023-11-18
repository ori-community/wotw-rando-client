#pragma once
#include <Modloader/app/structs/XmlReflectionImporter.h>
#include <Modloader/app/structs/XmlReflectionImporter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlReflectionImporter {
        inline app::XmlReflectionImporter__Class** type_info() {
            static app::XmlReflectionImporter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlReflectionImporter__Class**)(modloader::win::memory::resolve_rva(0x04702488));
            }
            return cache;
        }
        inline app::XmlReflectionImporter__Class* get_class() {
            return il2cpp::get_class<app::XmlReflectionImporter__Class>(type_info(), "System.Xml.Serialization", "XmlReflectionImporter");
        }
        inline app::XmlReflectionImporter* create() {
            return il2cpp::create_object<app::XmlReflectionImporter>(get_class());
        }
    } // namespace XmlReflectionImporter
} // namespace app::classes::types
