#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SerializationFormat__Enum_1 {
        inline app::SerializationFormat__Enum_1__Class** type_info = (app::SerializationFormat__Enum_1__Class**)(modloader::win::memory::resolve_rva(0x04771198));
        inline app::SerializationFormat__Enum_1__Class* get_class() {
            return il2cpp::get_class<app::SerializationFormat__Enum_1__Class>(type_info, "System.Data", "SerializationFormat");
        }
        inline app::SerializationFormat__Enum_1* create() {
            return il2cpp::create_object<app::SerializationFormat__Enum_1>(get_class());
        }
    } // namespace SerializationFormat__Enum_1
} // namespace app::classes::types
