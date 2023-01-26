#pragma once
#include <Modloader/app/structs/SetDifficultyAction.h>
#include <Modloader/app/structs/SetDifficultyAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetDifficultyAction {
        inline app::SetDifficultyAction__Class** type_info() {
            static app::SetDifficultyAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SetDifficultyAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SetDifficultyAction__Class* get_class() {
            return il2cpp::get_class<app::SetDifficultyAction__Class>(type_info(), "", "SetDifficultyAction");
        }
        inline app::SetDifficultyAction* create() {
            return il2cpp::create_object<app::SetDifficultyAction>(get_class());
        }
    } // namespace SetDifficultyAction
} // namespace app::classes::types
