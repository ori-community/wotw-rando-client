#pragma once
#include <Modloader/app/structs/ContactPoint2D__Array.h>
#include <Modloader/app/structs/ContactPoint2D__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContactPoint2D__Array {
        inline app::ContactPoint2D__Array__Class** type_info() {
            static app::ContactPoint2D__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ContactPoint2D__Array__Class**)(modloader::win::memory::resolve_rva(0x0470D4C8));
            }
            return cache;
        }
        inline app::ContactPoint2D__Array__Class* get_class() {
            return il2cpp::get_class<app::ContactPoint2D__Array__Class>(type_info(), "UnityEngine", "ContactPoint2D[]");
        }
        inline app::ContactPoint2D__Array* create() {
            return il2cpp::create_object<app::ContactPoint2D__Array>(get_class());
        }
    } // namespace ContactPoint2D__Array
} // namespace app::classes::types
