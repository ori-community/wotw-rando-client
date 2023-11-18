#pragma once
#include <Modloader/app/structs/Transform__Array.h>
#include <Modloader/app/structs/Transform__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Transform__Array {
        inline app::Transform__Array__Class** type_info() {
            static app::Transform__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Transform__Array__Class**)(modloader::win::memory::resolve_rva(0x04780318));
            }
            return cache;
        }
        inline app::Transform__Array__Class* get_class() {
            return il2cpp::get_class<app::Transform__Array__Class>(type_info(), "UnityEngine", "Transform[]");
        }
        inline app::Transform__Array* create() {
            return il2cpp::create_object<app::Transform__Array>(get_class());
        }
    } // namespace Transform__Array
} // namespace app::classes::types
