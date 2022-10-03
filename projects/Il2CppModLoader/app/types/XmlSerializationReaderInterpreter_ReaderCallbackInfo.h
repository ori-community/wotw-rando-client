#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSerializationReaderInterpreter_ReaderCallbackInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSerializationReaderInterpreter_ReaderCallbackInfo__Class** type_info;
        inline app::XmlSerializationReaderInterpreter_ReaderCallbackInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSerializationReaderInterpreter_ReaderCallbackInfo__Class>(type_info, "System.Xml.Serialization", "XmlSerializationReaderInterpreter", "ReaderCallbackInfo");
        }
        inline app::XmlSerializationReaderInterpreter_ReaderCallbackInfo* create() {
            return il2cpp::create_object<app::XmlSerializationReaderInterpreter_ReaderCallbackInfo>(get_class());
        }
    } // namespace XmlSerializationReaderInterpreter_ReaderCallbackInfo
} // namespace app::classes::types
