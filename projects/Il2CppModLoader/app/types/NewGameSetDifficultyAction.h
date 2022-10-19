#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NewGameSetDifficultyAction {
        namespace {
            inline app::NewGameSetDifficultyAction__Class* type_info_ref = nullptr;
        }
        inline app::NewGameSetDifficultyAction__Class** type_info = &type_info_ref;
        inline app::NewGameSetDifficultyAction__Class* get_class() {
            return il2cpp::get_class<app::NewGameSetDifficultyAction__Class>(type_info, "", "NewGameSetDifficultyAction");
        }
        inline app::NewGameSetDifficultyAction* create() {
            return il2cpp::create_object<app::NewGameSetDifficultyAction>(get_class());
        }
    } // namespace NewGameSetDifficultyAction
} // namespace app::classes::types
