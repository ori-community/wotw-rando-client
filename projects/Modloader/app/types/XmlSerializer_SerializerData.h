#pragma once
#include <Modloader/app/structs/XmlSerializer_SerializerData.h>
#include <Modloader/app/structs/XmlSerializer_SerializerData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSerializer_SerializerData {
        inline app::XmlSerializer_SerializerData__Class** type_info() {
            static app::XmlSerializer_SerializerData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlSerializer_SerializerData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlSerializer_SerializerData__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSerializer_SerializerData__Class>(type_info(), "System.Xml.Serialization", "XmlSerializer", "SerializerData");
        }
        inline app::XmlSerializer_SerializerData* create() {
            return il2cpp::create_object<app::XmlSerializer_SerializerData>(get_class());
        }
    } // namespace XmlSerializer_SerializerData
} // namespace app::classes::types
