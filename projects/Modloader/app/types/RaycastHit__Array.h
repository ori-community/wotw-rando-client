#pragma once
#include <Modloader/app/structs/RaycastHit__Array.h>
#include <Modloader/app/structs/RaycastHit__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaycastHit__Array {
        inline app::RaycastHit__Array__Class** type_info() {
            static app::RaycastHit__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RaycastHit__Array__Class**)(modloader::win::memory::resolve_rva(0x04727068));
            }
            return cache;
        }
        inline app::RaycastHit__Array__Class* get_class() {
            return il2cpp::get_class<app::RaycastHit__Array__Class>(type_info(), "UnityEngine", "RaycastHit[]");
        }
        inline app::RaycastHit__Array* create() {
            return il2cpp::create_object<app::RaycastHit__Array>(get_class());
        }
    } // namespace RaycastHit__Array
} // namespace app::classes::types
