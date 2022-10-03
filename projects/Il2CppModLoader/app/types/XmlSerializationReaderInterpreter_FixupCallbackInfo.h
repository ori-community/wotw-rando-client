#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSerializationReaderInterpreter_FixupCallbackInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSerializationReaderInterpreter_FixupCallbackInfo__Class** type_info;
        inline app::XmlSerializationReaderInterpreter_FixupCallbackInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSerializationReaderInterpreter_FixupCallbackInfo__Class>(type_info, "System.Xml.Serialization", "XmlSerializationReaderInterpreter", "FixupCallbackInfo");
        }
        inline app::XmlSerializationReaderInterpreter_FixupCallbackInfo* create() {
            return il2cpp::create_object<app::XmlSerializationReaderInterpreter_FixupCallbackInfo>(get_class());
        }
    } // namespace XmlSerializationReaderInterpreter_FixupCallbackInfo
} // namespace app::classes::types
