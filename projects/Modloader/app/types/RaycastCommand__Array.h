#pragma once
#include <Modloader/app/structs/RaycastCommand__Array.h>
#include <Modloader/app/structs/RaycastCommand__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaycastCommand__Array {
        inline app::RaycastCommand__Array__Class** type_info() {
            static app::RaycastCommand__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RaycastCommand__Array__Class**)(modloader::win::memory::resolve_rva(0x0474CE18));
            }
            return cache;
        }
        inline app::RaycastCommand__Array__Class* get_class() {
            return il2cpp::get_class<app::RaycastCommand__Array__Class>(type_info(), "UnityEngine", "RaycastCommand[]");
        }
        inline app::RaycastCommand__Array* create() {
            return il2cpp::create_object<app::RaycastCommand__Array>(get_class());
        }
    } // namespace RaycastCommand__Array
} // namespace app::classes::types
