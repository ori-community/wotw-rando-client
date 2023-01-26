#pragma once
#include <Modloader/app/structs/XmlSerializerImplementation.h>
#include <Modloader/app/structs/XmlSerializerImplementation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSerializerImplementation {
        inline app::XmlSerializerImplementation__Class** type_info() {
            static app::XmlSerializerImplementation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlSerializerImplementation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlSerializerImplementation__Class* get_class() {
            return il2cpp::get_class<app::XmlSerializerImplementation__Class>(type_info(), "System.Xml.Serialization", "XmlSerializerImplementation");
        }
        inline app::XmlSerializerImplementation* create() {
            return il2cpp::create_object<app::XmlSerializerImplementation>(get_class());
        }
    } // namespace XmlSerializerImplementation
} // namespace app::classes::types
