#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlDateTimeSerializationMode__Enum {
        inline app::XmlDateTimeSerializationMode__Enum__Class** type_info = (app::XmlDateTimeSerializationMode__Enum__Class**)(modloader::win::memory::resolve_rva(0x04737198));
        inline app::XmlDateTimeSerializationMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlDateTimeSerializationMode__Enum__Class>(type_info, "System.Xml", "XmlDateTimeSerializationMode");
        }
        inline app::XmlDateTimeSerializationMode__Enum* create() {
            return il2cpp::create_object<app::XmlDateTimeSerializationMode__Enum>(get_class());
        }
    } // namespace XmlDateTimeSerializationMode__Enum
} // namespace app::classes::types
