#pragma once
#include <Modloader/app/structs/BrainBehaviour__Array.h>
#include <Modloader/app/structs/BrainBehaviour__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BrainBehaviour__Array {
        inline app::BrainBehaviour__Array__Class** type_info() {
            static app::BrainBehaviour__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BrainBehaviour__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BrainBehaviour__Array__Class* get_class() {
            return il2cpp::get_class<app::BrainBehaviour__Array__Class>(type_info(), "Moon", "BrainBehaviour[]");
        }
        inline app::BrainBehaviour__Array* create() {
            return il2cpp::create_object<app::BrainBehaviour__Array>(get_class());
        }
    } // namespace BrainBehaviour__Array
} // namespace app::classes::types
