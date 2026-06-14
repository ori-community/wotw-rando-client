#pragma once
#include <Modloader/app/structs/XmlSerializationReaderInterpreter_FixupCallbackInfo.h>
#include <Modloader/app/structs/XmlSerializationReaderInterpreter_FixupCallbackInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlSerializationReaderInterpreter_FixupCallbackInfo {
        inline app::XmlSerializationReaderInterpreter_FixupCallbackInfo__Class** type_info() {
            static app::XmlSerializationReaderInterpreter_FixupCallbackInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlSerializationReaderInterpreter_FixupCallbackInfo__Class**)(modloader::win::memory::resolve_rva(0x047248F0));
            }
            return cache;
        }
        inline app::XmlSerializationReaderInterpreter_FixupCallbackInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSerializationReaderInterpreter_FixupCallbackInfo__Class>(type_info(), "System.Xml.Serialization", "XmlSerializationReaderInterpreter", "FixupCallbackInfo");
        }
        inline app::XmlSerializationReaderInterpreter_FixupCallbackInfo* create() {
            return il2cpp::create_object<app::XmlSerializationReaderInterpreter_FixupCallbackInfo>(get_class());
        }
    } // namespace XmlSerializationReaderInterpreter_FixupCallbackInfo
} // namespace app::classes::types
