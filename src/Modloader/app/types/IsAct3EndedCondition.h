#pragma once
#include <Modloader/app/structs/IsAct3EndedCondition.h>
#include <Modloader/app/structs/IsAct3EndedCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsAct3EndedCondition {
        inline app::IsAct3EndedCondition__Class** type_info() {
            static app::IsAct3EndedCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsAct3EndedCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsAct3EndedCondition__Class* get_class() {
            return il2cpp::get_class<app::IsAct3EndedCondition__Class>(type_info(), "", "IsAct3EndedCondition");
        }
        inline app::IsAct3EndedCondition* create() {
            return il2cpp::create_object<app::IsAct3EndedCondition>(get_class());
        }
    } // namespace IsAct3EndedCondition
} // namespace app::classes::types
