#pragma once
#include <Modloader/app/structs/ChangeDifficultyAction.h>
#include <Modloader/app/structs/ChangeDifficultyAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChangeDifficultyAction {
        inline app::ChangeDifficultyAction__Class** type_info() {
            static app::ChangeDifficultyAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChangeDifficultyAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChangeDifficultyAction__Class* get_class() {
            return il2cpp::get_class<app::ChangeDifficultyAction__Class>(type_info(), "", "ChangeDifficultyAction");
        }
        inline app::ChangeDifficultyAction* create() {
            return il2cpp::create_object<app::ChangeDifficultyAction>(get_class());
        }
    } // namespace ChangeDifficultyAction
} // namespace app::classes::types
