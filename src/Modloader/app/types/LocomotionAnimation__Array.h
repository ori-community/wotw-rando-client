#pragma once
#include <Modloader/app/structs/LocomotionAnimation__Array.h>
#include <Modloader/app/structs/LocomotionAnimation__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocomotionAnimation__Array {
        inline app::LocomotionAnimation__Array__Class** type_info() {
            static app::LocomotionAnimation__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LocomotionAnimation__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LocomotionAnimation__Array__Class* get_class() {
            return il2cpp::get_class<app::LocomotionAnimation__Array__Class>(type_info(), "Moon", "LocomotionAnimation[]");
        }
        inline app::LocomotionAnimation__Array* create() {
            return il2cpp::create_object<app::LocomotionAnimation__Array>(get_class());
        }
    } // namespace LocomotionAnimation__Array
} // namespace app::classes::types
