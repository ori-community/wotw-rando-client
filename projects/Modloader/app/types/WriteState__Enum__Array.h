#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WriteState__Enum__Array {
        inline app::WriteState__Enum__Array__Class** type_info = (app::WriteState__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x0475C290));
        inline app::WriteState__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::WriteState__Enum__Array__Class>(type_info, "System.Xml", "WriteState[]");
        }
        inline app::WriteState__Enum__Array* create() {
            return il2cpp::create_object<app::WriteState__Enum__Array>(get_class());
        }
    } // namespace WriteState__Enum__Array
} // namespace app::classes::types
