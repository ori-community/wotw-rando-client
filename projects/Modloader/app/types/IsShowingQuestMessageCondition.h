#pragma once
#include <Modloader/app/structs/IsShowingQuestMessageCondition.h>
#include <Modloader/app/structs/IsShowingQuestMessageCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsShowingQuestMessageCondition {
        inline app::IsShowingQuestMessageCondition__Class** type_info() {
            static app::IsShowingQuestMessageCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsShowingQuestMessageCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsShowingQuestMessageCondition__Class* get_class() {
            return il2cpp::get_class<app::IsShowingQuestMessageCondition__Class>(type_info(), "", "IsShowingQuestMessageCondition");
        }
        inline app::IsShowingQuestMessageCondition* create() {
            return il2cpp::create_object<app::IsShowingQuestMessageCondition>(get_class());
        }
    } // namespace IsShowingQuestMessageCondition
} // namespace app::classes::types
