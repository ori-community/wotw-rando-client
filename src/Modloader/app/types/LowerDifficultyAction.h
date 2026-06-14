#pragma once
#include <Modloader/app/structs/LowerDifficultyAction.h>
#include <Modloader/app/structs/LowerDifficultyAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LowerDifficultyAction {
        inline app::LowerDifficultyAction__Class** type_info() {
            static app::LowerDifficultyAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LowerDifficultyAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LowerDifficultyAction__Class* get_class() {
            return il2cpp::get_class<app::LowerDifficultyAction__Class>(type_info(), "", "LowerDifficultyAction");
        }
        inline app::LowerDifficultyAction* create() {
            return il2cpp::create_object<app::LowerDifficultyAction>(get_class());
        }
    } // namespace LowerDifficultyAction
} // namespace app::classes::types
