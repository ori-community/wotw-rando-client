#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CancelDifficultyScreenAction {
        namespace {
            app::CancelDifficultyScreenAction__Class* type_info_ref = nullptr;
        }
        app::CancelDifficultyScreenAction__Class** type_info = &type_info_ref;
        inline app::CancelDifficultyScreenAction__Class* get_class() {
            return il2cpp::get_class<app::CancelDifficultyScreenAction__Class>(type_info, "", "CancelDifficultyScreenAction");
        }
        inline app::CancelDifficultyScreenAction* create() {
            return il2cpp::create_object<app::CancelDifficultyScreenAction>(get_class());
        }
    } // namespace CancelDifficultyScreenAction
} // namespace app::classes::types
