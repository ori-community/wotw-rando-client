#pragma once
#include <Modloader/app/structs/BehaviourSet.h>
#include <Modloader/app/structs/BehaviourSet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BehaviourSet {
        inline app::BehaviourSet__Class** type_info() {
            static app::BehaviourSet__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BehaviourSet__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BehaviourSet__Class* get_class() {
            return il2cpp::get_class<app::BehaviourSet__Class>(type_info(), "", "BehaviourSet");
        }
        inline app::BehaviourSet* create() {
            return il2cpp::create_object<app::BehaviourSet>(get_class());
        }
    } // namespace BehaviourSet
} // namespace app::classes::types
