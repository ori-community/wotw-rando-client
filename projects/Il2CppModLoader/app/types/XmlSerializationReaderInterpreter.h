#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSerializationReaderInterpreter {
        inline app::XmlSerializationReaderInterpreter__Class** type_info = (app::XmlSerializationReaderInterpreter__Class**)(modloader::win::memory::resolve_rva(0x047363E0));
        inline app::XmlSerializationReaderInterpreter__Class* get_class() {
            return il2cpp::get_class<app::XmlSerializationReaderInterpreter__Class>(type_info, "System.Xml.Serialization", "XmlSerializationReaderInterpreter");
        }
        inline app::XmlSerializationReaderInterpreter* create() {
            return il2cpp::create_object<app::XmlSerializationReaderInterpreter>(get_class());
        }
    } // namespace XmlSerializationReaderInterpreter
} // namespace app::classes::types
