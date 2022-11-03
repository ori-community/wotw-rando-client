#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceMenuScreenDifficultyLabel {
        namespace {
            inline app::RaceMenuScreenDifficultyLabel__Class* type_info_ref = nullptr;
        }
        inline app::RaceMenuScreenDifficultyLabel__Class** type_info = &type_info_ref;
        inline app::RaceMenuScreenDifficultyLabel__Class* get_class() {
            return il2cpp::get_class<app::RaceMenuScreenDifficultyLabel__Class>(type_info, "", "RaceMenuScreenDifficultyLabel");
        }
        inline app::RaceMenuScreenDifficultyLabel* create() {
            return il2cpp::create_object<app::RaceMenuScreenDifficultyLabel>(get_class());
        }
    } // namespace RaceMenuScreenDifficultyLabel
} // namespace app::classes::types
