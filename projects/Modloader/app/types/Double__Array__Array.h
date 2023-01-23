#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Double__Array__Array__Class.h>
#include <Modloader/app/structs/Double__Array__Array.h>

namespace app::classes::types {
    namespace Double__Array__Array {
        inline app::Double__Array__Array__Class** type_info = (app::Double__Array__Array__Class**)(modloader::win::memory::resolve_rva(0x04774100));
        inline app::Double__Array__Array__Class* get_class() {
            return il2cpp::get_class<app::Double__Array__Array__Class>(type_info, "System", "Double[][]");
        }
        inline app::Double__Array__Array* create() {
            return il2cpp::create_object<app::Double__Array__Array>(get_class());
        }
    } // namespace Double__Array__Array
} // namespace app::classes::types
