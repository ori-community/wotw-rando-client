#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceMenuScreenDifficultyLabel {
        namespace {
            app::RaceMenuScreenDifficultyLabel__Class* type_info_ref = nullptr;
        }
        app::RaceMenuScreenDifficultyLabel__Class** type_info = &type_info_ref;
        inline app::RaceMenuScreenDifficultyLabel__Class* get_class() {
            return il2cpp::get_class<app::RaceMenuScreenDifficultyLabel__Class>(type_info, "", "RaceMenuScreenDifficultyLabel");
        }
        inline app::RaceMenuScreenDifficultyLabel* create() {
            return il2cpp::create_object<app::RaceMenuScreenDifficultyLabel>(get_class());
        }
    } // namespace RaceMenuScreenDifficultyLabel
} // namespace app::classes::types
