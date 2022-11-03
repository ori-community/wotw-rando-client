#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RequireComponent__Array {
        inline app::RequireComponent__Array__Class** type_info = (app::RequireComponent__Array__Class**)(modloader::win::memory::resolve_rva(0x047888C8));
        inline app::RequireComponent__Array__Class* get_class() {
            return il2cpp::get_class<app::RequireComponent__Array__Class>(type_info, "UnityEngine", "RequireComponent[]");
        }
        inline app::RequireComponent__Array* create() {
            return il2cpp::create_object<app::RequireComponent__Array>(get_class());
        }
    } // namespace RequireComponent__Array
} // namespace app::classes::types
