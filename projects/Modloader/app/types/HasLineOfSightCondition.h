#pragma once
#include <Modloader/app/structs/HasLineOfSightCondition.h>
#include <Modloader/app/structs/HasLineOfSightCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HasLineOfSightCondition {
        inline app::HasLineOfSightCondition__Class** type_info() {
            static app::HasLineOfSightCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HasLineOfSightCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HasLineOfSightCondition__Class* get_class() {
            return il2cpp::get_class<app::HasLineOfSightCondition__Class>(type_info(), "Moon.BehaviourSystem", "HasLineOfSightCondition");
        }
        inline app::HasLineOfSightCondition* create() {
            return il2cpp::create_object<app::HasLineOfSightCondition>(get_class());
        }
    } // namespace HasLineOfSightCondition
} // namespace app::classes::types
