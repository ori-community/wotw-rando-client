#pragma once
#include <Modloader/app/structs/RopeGrabbedCondition.h>
#include <Modloader/app/structs/RopeGrabbedCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RopeGrabbedCondition {
        inline app::RopeGrabbedCondition__Class** type_info() {
            static app::RopeGrabbedCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RopeGrabbedCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RopeGrabbedCondition__Class* get_class() {
            return il2cpp::get_class<app::RopeGrabbedCondition__Class>(type_info(), "", "RopeGrabbedCondition");
        }
        inline app::RopeGrabbedCondition* create() {
            return il2cpp::create_object<app::RopeGrabbedCondition>(get_class());
        }
    } // namespace RopeGrabbedCondition
} // namespace app::classes::types
