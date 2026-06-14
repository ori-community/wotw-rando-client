#pragma once
#include <Modloader/app/structs/OriLayeredAnimationsController_ConditionEvaluation__Enum.h>
#include <Modloader/app/structs/OriLayeredAnimationsController_ConditionEvaluation__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OriLayeredAnimationsController_ConditionEvaluation__Enum {
        inline app::OriLayeredAnimationsController_ConditionEvaluation__Enum__Class** type_info() {
            static app::OriLayeredAnimationsController_ConditionEvaluation__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OriLayeredAnimationsController_ConditionEvaluation__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OriLayeredAnimationsController_ConditionEvaluation__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::OriLayeredAnimationsController_ConditionEvaluation__Enum__Class>(type_info(), "", "OriLayeredAnimationsController", "ConditionEvaluation");
        }
        inline app::OriLayeredAnimationsController_ConditionEvaluation__Enum* create() {
            return il2cpp::create_object<app::OriLayeredAnimationsController_ConditionEvaluation__Enum>(get_class());
        }
    } // namespace OriLayeredAnimationsController_ConditionEvaluation__Enum
} // namespace app::classes::types
