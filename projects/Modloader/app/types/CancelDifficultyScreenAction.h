#pragma once
#include <Modloader/app/structs/CancelDifficultyScreenAction.h>
#include <Modloader/app/structs/CancelDifficultyScreenAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CancelDifficultyScreenAction {
        inline app::CancelDifficultyScreenAction__Class** type_info() {
            static app::CancelDifficultyScreenAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CancelDifficultyScreenAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CancelDifficultyScreenAction__Class* get_class() {
            return il2cpp::get_class<app::CancelDifficultyScreenAction__Class>(type_info(), "", "CancelDifficultyScreenAction");
        }
        inline app::CancelDifficultyScreenAction* create() {
            return il2cpp::create_object<app::CancelDifficultyScreenAction>(get_class());
        }
    } // namespace CancelDifficultyScreenAction
} // namespace app::classes::types
