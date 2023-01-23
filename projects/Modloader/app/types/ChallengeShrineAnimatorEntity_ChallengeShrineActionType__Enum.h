#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum__Class.h>
#include <Modloader/app/structs/ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum.h>

namespace app::classes::types {
    namespace ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum {
        namespace {
            inline app::ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum__Class** type_info = &type_info_ref;
        inline app::ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum__Class>(type_info, "", "ChallengeShrineAnimatorEntity", "ChallengeShrineActionType");
        }
        inline app::ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum* create() {
            return il2cpp::create_object<app::ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum>(get_class());
        }
    } // namespace ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum
} // namespace app::classes::types
