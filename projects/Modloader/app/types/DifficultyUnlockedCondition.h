#pragma once
#include <Modloader/app/structs/DifficultyUnlockedCondition.h>
#include <Modloader/app/structs/DifficultyUnlockedCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DifficultyUnlockedCondition {
        inline app::DifficultyUnlockedCondition__Class** type_info() {
            static app::DifficultyUnlockedCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DifficultyUnlockedCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DifficultyUnlockedCondition__Class* get_class() {
            return il2cpp::get_class<app::DifficultyUnlockedCondition__Class>(type_info(), "", "DifficultyUnlockedCondition");
        }
        inline app::DifficultyUnlockedCondition* create() {
            return il2cpp::create_object<app::DifficultyUnlockedCondition>(get_class());
        }
    } // namespace DifficultyUnlockedCondition
} // namespace app::classes::types
