#pragma once
#include <Modloader/app/structs/DisallowMultipleComponent__Array.h>
#include <Modloader/app/structs/DisallowMultipleComponent__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DisallowMultipleComponent__Array {
        inline app::DisallowMultipleComponent__Array__Class** type_info() {
            static app::DisallowMultipleComponent__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DisallowMultipleComponent__Array__Class**)(modloader::win::memory::resolve_rva(0x0475E828));
            }
            return cache;
        }
        inline app::DisallowMultipleComponent__Array__Class* get_class() {
            return il2cpp::get_class<app::DisallowMultipleComponent__Array__Class>(type_info(), "UnityEngine", "DisallowMultipleComponent[]");
        }
        inline app::DisallowMultipleComponent__Array* create() {
            return il2cpp::create_object<app::DisallowMultipleComponent__Array>(get_class());
        }
    } // namespace DisallowMultipleComponent__Array
} // namespace app::classes::types
