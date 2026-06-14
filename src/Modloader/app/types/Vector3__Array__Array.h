#pragma once
#include <Modloader/app/structs/Vector3__Array__Array.h>
#include <Modloader/app/structs/Vector3__Array__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Vector3__Array__Array {
        inline app::Vector3__Array__Array__Class** type_info() {
            static app::Vector3__Array__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Vector3__Array__Array__Class**)(modloader::win::memory::resolve_rva(0x0470FA88));
            }
            return cache;
        }
        inline app::Vector3__Array__Array__Class* get_class() {
            return il2cpp::get_class<app::Vector3__Array__Array__Class>(type_info(), "UnityEngine", "Vector3[][]");
        }
        inline app::Vector3__Array__Array* create() {
            return il2cpp::create_object<app::Vector3__Array__Array>(get_class());
        }
    } // namespace Vector3__Array__Array
} // namespace app::classes::types
