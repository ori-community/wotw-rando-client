#pragma once
#include <Modloader/app/structs/SpiderBatEntity_ClimbBehaviourType__Enum.h>
#include <Modloader/app/structs/SpiderBatEntity_ClimbBehaviourType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBatEntity_ClimbBehaviourType__Enum {
        inline app::SpiderBatEntity_ClimbBehaviourType__Enum__Class** type_info() {
            static app::SpiderBatEntity_ClimbBehaviourType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBatEntity_ClimbBehaviourType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBatEntity_ClimbBehaviourType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderBatEntity_ClimbBehaviourType__Enum__Class>(type_info(), "", "SpiderBatEntity", "ClimbBehaviourType");
        }
        inline app::SpiderBatEntity_ClimbBehaviourType__Enum* create() {
            return il2cpp::create_object<app::SpiderBatEntity_ClimbBehaviourType__Enum>(get_class());
        }
    } // namespace SpiderBatEntity_ClimbBehaviourType__Enum
} // namespace app::classes::types
