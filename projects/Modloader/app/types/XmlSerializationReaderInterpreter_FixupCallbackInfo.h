#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSerializationReaderInterpreter_FixupCallbackInfo {
        inline app::XmlSerializationReaderInterpreter_FixupCallbackInfo__Class** type_info = (app::XmlSerializationReaderInterpreter_FixupCallbackInfo__Class**)(modloader::win::memory::resolve_rva(0x047248F0));
        inline app::XmlSerializationReaderInterpreter_FixupCallbackInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSerializationReaderInterpreter_FixupCallbackInfo__Class>(type_info, "System.Xml.Serialization", "XmlSerializationReaderInterpreter", "FixupCallbackInfo");
        }
        inline app::XmlSerializationReaderInterpreter_FixupCallbackInfo* create() {
            return il2cpp::create_object<app::XmlSerializationReaderInterpreter_FixupCallbackInfo>(get_class());
        }
    } // namespace XmlSerializationReaderInterpreter_FixupCallbackInfo
} // namespace app::classes::types
