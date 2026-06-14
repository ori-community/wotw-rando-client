#pragma once
#include <Modloader/app/structs/XmlSerializationReader.h>
#include <Modloader/app/structs/XmlSerializationReader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSerializationReader {
        inline app::XmlSerializationReader__Class** type_info() {
            static app::XmlSerializationReader__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlSerializationReader__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlSerializationReader__Class* get_class() {
            return il2cpp::get_class<app::XmlSerializationReader__Class>(type_info(), "System.Xml.Serialization", "XmlSerializationReader");
        }
        inline app::XmlSerializationReader* create() {
            return il2cpp::create_object<app::XmlSerializationReader>(get_class());
        }
    } // namespace XmlSerializationReader
} // namespace app::classes::types
