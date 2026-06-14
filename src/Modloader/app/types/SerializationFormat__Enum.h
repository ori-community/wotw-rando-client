#pragma once
#include <Modloader/app/structs/SerializationFormat__Enum.h>
#include <Modloader/app/structs/SerializationFormat__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SerializationFormat__Enum {
        inline app::SerializationFormat__Enum__Class** type_info() {
            static app::SerializationFormat__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SerializationFormat__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SerializationFormat__Enum__Class* get_class() {
            return il2cpp::get_class<app::SerializationFormat__Enum__Class>(type_info(), "System.Xml.Serialization", "SerializationFormat");
        }
        inline app::SerializationFormat__Enum* create() {
            return il2cpp::create_object<app::SerializationFormat__Enum>(get_class());
        }
    } // namespace SerializationFormat__Enum
} // namespace app::classes::types
