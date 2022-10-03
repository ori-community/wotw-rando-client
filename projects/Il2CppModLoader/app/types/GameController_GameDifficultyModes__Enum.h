#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameController_GameDifficultyModes__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GameController_GameDifficultyModes__Enum__Class** type_info;
        inline app::GameController_GameDifficultyModes__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GameController_GameDifficultyModes__Enum__Class>(type_info, "", "GameController", "GameDifficultyModes");
        }
        inline app::GameController_GameDifficultyModes__Enum* create() {
            return il2cpp::create_object<app::GameController_GameDifficultyModes__Enum>(get_class());
        }
    } // namespace GameController_GameDifficultyModes__Enum
} // namespace app::classes::types
