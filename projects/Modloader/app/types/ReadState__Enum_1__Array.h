#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReadState__Enum_1__Array {
        inline app::ReadState__Enum_1__Array__Class** type_info = (app::ReadState__Enum_1__Array__Class**)(modloader::win::memory::resolve_rva(0x04763620));
        inline app::ReadState__Enum_1__Array__Class* get_class() {
            return il2cpp::get_class<app::ReadState__Enum_1__Array__Class>(type_info, "System.Xml", "ReadState[]");
        }
        inline app::ReadState__Enum_1__Array* create() {
            return il2cpp::create_object<app::ReadState__Enum_1__Array>(get_class());
        }
    } // namespace ReadState__Enum_1__Array
} // namespace app::classes::types
