#pragma once
#include <Modloader/app/structs/RaycastHit2D__Array.h>
#include <Modloader/app/structs/RaycastHit2D__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaycastHit2D__Array {
        inline app::RaycastHit2D__Array__Class** type_info() {
            static app::RaycastHit2D__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RaycastHit2D__Array__Class**)(modloader::win::memory::resolve_rva(0x047268F0));
            }
            return cache;
        }
        inline app::RaycastHit2D__Array__Class* get_class() {
            return il2cpp::get_class<app::RaycastHit2D__Array__Class>(type_info(), "UnityEngine", "RaycastHit2D[]");
        }
        inline app::RaycastHit2D__Array* create() {
            return il2cpp::create_object<app::RaycastHit2D__Array>(get_class());
        }
    } // namespace RaycastHit2D__Array
} // namespace app::classes::types
