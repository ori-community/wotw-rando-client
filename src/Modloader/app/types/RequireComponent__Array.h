#pragma once
#include <Modloader/app/structs/RequireComponent__Array.h>
#include <Modloader/app/structs/RequireComponent__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RequireComponent__Array {
        inline app::RequireComponent__Array__Class** type_info() {
            static app::RequireComponent__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RequireComponent__Array__Class**)(modloader::win::memory::resolve_rva(0x047888C8));
            }
            return cache;
        }
        inline app::RequireComponent__Array__Class* get_class() {
            return il2cpp::get_class<app::RequireComponent__Array__Class>(type_info(), "UnityEngine", "RequireComponent[]");
        }
        inline app::RequireComponent__Array* create() {
            return il2cpp::create_object<app::RequireComponent__Array>(get_class());
        }
    } // namespace RequireComponent__Array
} // namespace app::classes::types
