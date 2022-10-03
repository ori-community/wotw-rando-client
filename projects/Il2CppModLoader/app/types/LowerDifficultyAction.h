#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LowerDifficultyAction {
        namespace {
            app::LowerDifficultyAction__Class* type_info_ref = nullptr;
        }
        app::LowerDifficultyAction__Class** type_info = &type_info_ref;
        inline app::LowerDifficultyAction__Class* get_class() {
            return il2cpp::get_class<app::LowerDifficultyAction__Class>(type_info, "", "LowerDifficultyAction");
        }
        inline app::LowerDifficultyAction* create() {
            return il2cpp::create_object<app::LowerDifficultyAction>(get_class());
        }
    } // namespace LowerDifficultyAction
} // namespace app::classes::types
