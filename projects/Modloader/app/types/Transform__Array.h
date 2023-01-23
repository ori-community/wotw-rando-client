#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Transform__Array__Class.h>
#include <Modloader/app/structs/Transform__Array.h>

namespace app::classes::types {
    namespace Transform__Array {
        inline app::Transform__Array__Class** type_info = (app::Transform__Array__Class**)(modloader::win::memory::resolve_rva(0x04780318));
        inline app::Transform__Array__Class* get_class() {
            return il2cpp::get_class<app::Transform__Array__Class>(type_info, "UnityEngine", "Transform[]");
        }
        inline app::Transform__Array* create() {
            return il2cpp::create_object<app::Transform__Array>(get_class());
        }
    } // namespace Transform__Array
} // namespace app::classes::types
