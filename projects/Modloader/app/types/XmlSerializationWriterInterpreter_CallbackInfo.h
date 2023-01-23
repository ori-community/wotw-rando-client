#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlSerializationWriterInterpreter_CallbackInfo__Class.h>
#include <Modloader/app/structs/XmlSerializationWriterInterpreter_CallbackInfo.h>

namespace app::classes::types {
    namespace XmlSerializationWriterInterpreter_CallbackInfo {
        inline app::XmlSerializationWriterInterpreter_CallbackInfo__Class** type_info = (app::XmlSerializationWriterInterpreter_CallbackInfo__Class**)(modloader::win::memory::resolve_rva(0x04785910));
        inline app::XmlSerializationWriterInterpreter_CallbackInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSerializationWriterInterpreter_CallbackInfo__Class>(type_info, "System.Xml.Serialization", "XmlSerializationWriterInterpreter", "CallbackInfo");
        }
        inline app::XmlSerializationWriterInterpreter_CallbackInfo* create() {
            return il2cpp::create_object<app::XmlSerializationWriterInterpreter_CallbackInfo>(get_class());
        }
    } // namespace XmlSerializationWriterInterpreter_CallbackInfo
} // namespace app::classes::types
