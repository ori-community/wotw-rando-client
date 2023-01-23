#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlSerializationReader_WriteCallbackInfo__Class.h>
#include <Modloader/app/structs/XmlSerializationReader_WriteCallbackInfo.h>

namespace app::classes::types {
    namespace XmlSerializationReader_WriteCallbackInfo {
        inline app::XmlSerializationReader_WriteCallbackInfo__Class** type_info = (app::XmlSerializationReader_WriteCallbackInfo__Class**)(modloader::win::memory::resolve_rva(0x047751C0));
        inline app::XmlSerializationReader_WriteCallbackInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlSerializationReader_WriteCallbackInfo__Class>(type_info, "System.Xml.Serialization", "XmlSerializationReader", "WriteCallbackInfo");
        }
        inline app::XmlSerializationReader_WriteCallbackInfo* create() {
            return il2cpp::create_object<app::XmlSerializationReader_WriteCallbackInfo>(get_class());
        }
    } // namespace XmlSerializationReader_WriteCallbackInfo
} // namespace app::classes::types
