#pragma once
#include <Modloader/app/structs/SerializationFormat__Enum_1.h>
#include <Modloader/app/structs/SerializationFormat__Enum_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SerializationFormat__Enum_1 {
        inline app::SerializationFormat__Enum_1__Class** type_info() {
            static app::SerializationFormat__Enum_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SerializationFormat__Enum_1__Class**)(modloader::win::memory::resolve_rva(0x04771198));
            }
            return cache;
        }
        inline app::SerializationFormat__Enum_1__Class* get_class() {
            return il2cpp::get_class<app::SerializationFormat__Enum_1__Class>(type_info(), "System.Data", "SerializationFormat");
        }
        inline app::SerializationFormat__Enum_1* create() {
            return il2cpp::create_object<app::SerializationFormat__Enum_1>(get_class());
        }
    } // namespace SerializationFormat__Enum_1
} // namespace app::classes::types
