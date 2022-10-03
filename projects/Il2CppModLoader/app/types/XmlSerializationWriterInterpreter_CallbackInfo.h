#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSerializationWriterInterpreter_CallbackInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSerializationWriterInterpreter_CallbackInfo__Class** type_info;
        inline app::XmlSerializationWriterInterpreter_CallbackInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSerializationWriterInterpreter_CallbackInfo__Class>(type_info, "System.Xml.Serialization", "XmlSerializationWriterInterpreter", "CallbackInfo");
        }
        inline app::XmlSerializationWriterInterpreter_CallbackInfo* create() {
            return il2cpp::create_object<app::XmlSerializationWriterInterpreter_CallbackInfo>(get_class());
        }
    } // namespace XmlSerializationWriterInterpreter_CallbackInfo
} // namespace app::classes::types
