#pragma once
#include <Modloader/app/structs/XmlSerializationReaderInterpreter_ReaderCallbackInfo.h>
#include <Modloader/app/structs/XmlSerializationReaderInterpreter_ReaderCallbackInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSerializationReaderInterpreter_ReaderCallbackInfo {
        inline app::XmlSerializationReaderInterpreter_ReaderCallbackInfo__Class** type_info() {
            static app::XmlSerializationReaderInterpreter_ReaderCallbackInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSerializationReaderInterpreter_ReaderCallbackInfo__Class**)(modloader::win::memory::resolve_rva(0x047409A8));
            }
            return cache;
        }
        inline app::XmlSerializationReaderInterpreter_ReaderCallbackInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSerializationReaderInterpreter_ReaderCallbackInfo__Class>(type_info(), "System.Xml.Serialization", "XmlSerializationReaderInterpreter", "ReaderCallbackInfo");
        }
        inline app::XmlSerializationReaderInterpreter_ReaderCallbackInfo* create() {
            return il2cpp::create_object<app::XmlSerializationReaderInterpreter_ReaderCallbackInfo>(get_class());
        }
    } // namespace XmlSerializationReaderInterpreter_ReaderCallbackInfo
} // namespace app::classes::types
