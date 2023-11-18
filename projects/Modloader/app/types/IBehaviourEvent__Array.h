#pragma once
#include <Modloader/app/structs/IBehaviourEvent__Array.h>
#include <Modloader/app/structs/IBehaviourEvent__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IBehaviourEvent__Array {
        inline app::IBehaviourEvent__Array__Class** type_info() {
            static app::IBehaviourEvent__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IBehaviourEvent__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IBehaviourEvent__Array__Class* get_class() {
            return il2cpp::get_class<app::IBehaviourEvent__Array__Class>(type_info(), "UberBehaviourTree", "IBehaviourEvent[]");
        }
        inline app::IBehaviourEvent__Array* create() {
            return il2cpp::create_object<app::IBehaviourEvent__Array>(get_class());
        }
    } // namespace IBehaviourEvent__Array
} // namespace app::classes::types
