#pragma once
#include <Modloader/app/structs/XmlSerializationGeneratedCode.h>
#include <Modloader/app/structs/XmlSerializationGeneratedCode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSerializationGeneratedCode {
        inline app::XmlSerializationGeneratedCode__Class** type_info() {
            static app::XmlSerializationGeneratedCode__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlSerializationGeneratedCode__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlSerializationGeneratedCode__Class* get_class() {
            return il2cpp::get_class<app::XmlSerializationGeneratedCode__Class>(type_info(), "System.Xml.Serialization", "XmlSerializationGeneratedCode");
        }
        inline app::XmlSerializationGeneratedCode* create() {
            return il2cpp::create_object<app::XmlSerializationGeneratedCode>(get_class());
        }
    } // namespace XmlSerializationGeneratedCode
} // namespace app::classes::types
