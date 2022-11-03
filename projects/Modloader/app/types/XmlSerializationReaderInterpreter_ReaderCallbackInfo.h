#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlSerializationReaderInterpreter_ReaderCallbackInfo {
        inline app::XmlSerializationReaderInterpreter_ReaderCallbackInfo__Class** type_info = (app::XmlSerializationReaderInterpreter_ReaderCallbackInfo__Class**)(modloader::win::memory::resolve_rva(0x047409A8));
        inline app::XmlSerializationReaderInterpreter_ReaderCallbackInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSerializationReaderInterpreter_ReaderCallbackInfo__Class>(type_info, "System.Xml.Serialization", "XmlSerializationReaderInterpreter", "ReaderCallbackInfo");
        }
        inline app::XmlSerializationReaderInterpreter_ReaderCallbackInfo* create() {
            return il2cpp::create_object<app::XmlSerializationReaderInterpreter_ReaderCallbackInfo>(get_class());
        }
    } // namespace XmlSerializationReaderInterpreter_ReaderCallbackInfo
} // namespace app::classes::types
