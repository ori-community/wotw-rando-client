#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSerializationWriterInterpreter {
        inline app::XmlSerializationWriterInterpreter__Class** type_info = (app::XmlSerializationWriterInterpreter__Class**)(modloader::win::memory::resolve_rva(0x047535B0));
        inline app::XmlSerializationWriterInterpreter__Class* get_class() {
            return il2cpp::get_class<app::XmlSerializationWriterInterpreter__Class>(type_info, "System.Xml.Serialization", "XmlSerializationWriterInterpreter");
        }
        inline app::XmlSerializationWriterInterpreter* create() {
            return il2cpp::create_object<app::XmlSerializationWriterInterpreter>(get_class());
        }
    } // namespace XmlSerializationWriterInterpreter
} // namespace app::classes::types
