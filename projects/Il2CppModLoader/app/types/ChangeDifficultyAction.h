#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChangeDifficultyAction {
        namespace {
            app::ChangeDifficultyAction__Class* type_info_ref = nullptr;
        }
        app::ChangeDifficultyAction__Class** type_info = &type_info_ref;
        inline app::ChangeDifficultyAction__Class* get_class() {
            return il2cpp::get_class<app::ChangeDifficultyAction__Class>(type_info, "", "ChangeDifficultyAction");
        }
        inline app::ChangeDifficultyAction* create() {
            return il2cpp::create_object<app::ChangeDifficultyAction>(get_class());
        }
    } // namespace ChangeDifficultyAction
} // namespace app::classes::types
