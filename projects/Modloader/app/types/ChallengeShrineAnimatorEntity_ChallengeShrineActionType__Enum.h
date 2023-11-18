#pragma once
#include <Modloader/app/structs/ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum.h>
#include <Modloader/app/structs/ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum {
        inline app::ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum__Class** type_info() {
            static app::ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum__Class>(type_info(), "", "ChallengeShrineAnimatorEntity", "ChallengeShrineActionType");
        }
        inline app::ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum* create() {
            return il2cpp::create_object<app::ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum>(get_class());
        }
    } // namespace ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum
} // namespace app::classes::types
