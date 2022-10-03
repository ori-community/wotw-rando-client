#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSerializationWriterInterpreter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlSerializationWriterInterpreter__Class** type_info;
        inline app::XmlSerializationWriterInterpreter__Class* get_class() {
            return il2cpp::get_class<app::XmlSerializationWriterInterpreter__Class>(type_info, "System.Xml.Serialization", "XmlSerializationWriterInterpreter");
        }
        inline app::XmlSerializationWriterInterpreter* create() {
            return il2cpp::create_object<app::XmlSerializationWriterInterpreter>(get_class());
        }
    } // namespace XmlSerializationWriterInterpreter
} // namespace app::classes::types
