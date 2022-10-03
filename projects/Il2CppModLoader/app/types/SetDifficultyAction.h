#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetDifficultyAction {
        namespace {
            app::SetDifficultyAction__Class* type_info_ref = nullptr;
        }
        app::SetDifficultyAction__Class** type_info = &type_info_ref;
        inline app::SetDifficultyAction__Class* get_class() {
            return il2cpp::get_class<app::SetDifficultyAction__Class>(type_info, "", "SetDifficultyAction");
        }
        inline app::SetDifficultyAction* create() {
            return il2cpp::create_object<app::SetDifficultyAction>(get_class());
        }
    } // namespace SetDifficultyAction
} // namespace app::classes::types
