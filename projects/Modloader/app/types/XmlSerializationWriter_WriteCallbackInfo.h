#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlSerializationWriter_WriteCallbackInfo__Class.h>
#include <Modloader/app/structs/XmlSerializationWriter_WriteCallbackInfo.h>

namespace app::classes::types {
    namespace XmlSerializationWriter_WriteCallbackInfo {
        inline app::XmlSerializationWriter_WriteCallbackInfo__Class** type_info = (app::XmlSerializationWriter_WriteCallbackInfo__Class**)(modloader::win::memory::resolve_rva(0x0471C338));
        inline app::XmlSerializationWriter_WriteCallbackInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSerializationWriter_WriteCallbackInfo__Class>(type_info, "System.Xml.Serialization", "XmlSerializationWriter", "WriteCallbackInfo");
        }
        inline app::XmlSerializationWriter_WriteCallbackInfo* create() {
            return il2cpp::create_object<app::XmlSerializationWriter_WriteCallbackInfo>(get_class());
        }
    } // namespace XmlSerializationWriter_WriteCallbackInfo
} // namespace app::classes::types
