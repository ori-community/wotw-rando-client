#pragma once
#include <Modloader/app/structs/XmlDateTimeSerializationMode__Enum.h>
#include <Modloader/app/structs/XmlDateTimeSerializationMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlDateTimeSerializationMode__Enum {
        inline app::XmlDateTimeSerializationMode__Enum__Class** type_info() {
            static app::XmlDateTimeSerializationMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlDateTimeSerializationMode__Enum__Class**)(modloader::win::memory::resolve_rva(0x04737198));
            }
            return cache;
        }
        inline app::XmlDateTimeSerializationMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::XmlDateTimeSerializationMode__Enum__Class>(type_info(), "System.Xml", "XmlDateTimeSerializationMode");
        }
        inline app::XmlDateTimeSerializationMode__Enum* create() {
            return il2cpp::create_object<app::XmlDateTimeSerializationMode__Enum>(get_class());
        }
    } // namespace XmlDateTimeSerializationMode__Enum
} // namespace app::classes::types
