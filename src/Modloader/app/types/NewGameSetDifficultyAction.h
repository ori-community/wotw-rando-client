#pragma once
#include <Modloader/app/structs/NewGameSetDifficultyAction.h>
#include <Modloader/app/structs/NewGameSetDifficultyAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NewGameSetDifficultyAction {
        inline app::NewGameSetDifficultyAction__Class** type_info() {
            static app::NewGameSetDifficultyAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NewGameSetDifficultyAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NewGameSetDifficultyAction__Class* get_class() {
            return il2cpp::get_class<app::NewGameSetDifficultyAction__Class>(type_info(), "", "NewGameSetDifficultyAction");
        }
        inline app::NewGameSetDifficultyAction* create() {
            return il2cpp::create_object<app::NewGameSetDifficultyAction>(get_class());
        }
    } // namespace NewGameSetDifficultyAction
} // namespace app::classes::types
