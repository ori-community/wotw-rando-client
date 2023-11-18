#pragma once
#include <Modloader/app/structs/RaceMenuScreenDifficultyLabel.h>
#include <Modloader/app/structs/RaceMenuScreenDifficultyLabel__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceMenuScreenDifficultyLabel {
        inline app::RaceMenuScreenDifficultyLabel__Class** type_info() {
            static app::RaceMenuScreenDifficultyLabel__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RaceMenuScreenDifficultyLabel__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RaceMenuScreenDifficultyLabel__Class* get_class() {
            return il2cpp::get_class<app::RaceMenuScreenDifficultyLabel__Class>(type_info(), "", "RaceMenuScreenDifficultyLabel");
        }
        inline app::RaceMenuScreenDifficultyLabel* create() {
            return il2cpp::create_object<app::RaceMenuScreenDifficultyLabel>(get_class());
        }
    } // namespace RaceMenuScreenDifficultyLabel
} // namespace app::classes::types
