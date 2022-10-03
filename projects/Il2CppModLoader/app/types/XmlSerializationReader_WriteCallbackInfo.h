#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSerializationReader_WriteCallbackInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSerializationReader_WriteCallbackInfo__Class** type_info;
        inline app::XmlSerializationReader_WriteCallbackInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSerializationReader_WriteCallbackInfo__Class>(type_info, "System.Xml.Serialization", "XmlSerializationReader", "WriteCallbackInfo");
        }
        inline app::XmlSerializationReader_WriteCallbackInfo* create() {
            return il2cpp::create_object<app::XmlSerializationReader_WriteCallbackInfo>(get_class());
        }
    } // namespace XmlSerializationReader_WriteCallbackInfo
} // namespace app::classes::types
