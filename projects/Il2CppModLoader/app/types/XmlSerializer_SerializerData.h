#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSerializer_SerializerData {
        namespace {
            inline app::XmlSerializer_SerializerData__Class* type_info_ref = nullptr;
        }
        inline app::XmlSerializer_SerializerData__Class** type_info = &type_info_ref;
        inline app::XmlSerializer_SerializerData__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSerializer_SerializerData__Class>(type_info, "System.Xml.Serialization", "XmlSerializer", "SerializerData");
        }
        inline app::XmlSerializer_SerializerData* create() {
            return il2cpp::create_object<app::XmlSerializer_SerializerData>(get_class());
        }
    } // namespace XmlSerializer_SerializerData
} // namespace app::classes::types
