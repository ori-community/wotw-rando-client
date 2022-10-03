#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSerializationReaderInterpreter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSerializationReaderInterpreter__Class** type_info;
        inline app::XmlSerializationReaderInterpreter__Class* get_class() {
            return il2cpp::get_class<app::XmlSerializationReaderInterpreter__Class>(type_info, "System.Xml.Serialization", "XmlSerializationReaderInterpreter");
        }
        inline app::XmlSerializationReaderInterpreter* create() {
            return il2cpp::create_object<app::XmlSerializationReaderInterpreter>(get_class());
        }
    } // namespace XmlSerializationReaderInterpreter
} // namespace app::classes::types
