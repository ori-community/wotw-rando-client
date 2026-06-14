#pragma once
#include <Modloader/app/structs/DifficultyCondition.h>
#include <Modloader/app/structs/DifficultyCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DifficultyCondition {
        inline app::DifficultyCondition__Class** type_info() {
            static app::DifficultyCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DifficultyCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DifficultyCondition__Class* get_class() {
            return il2cpp::get_class<app::DifficultyCondition__Class>(type_info(), "", "DifficultyCondition");
        }
        inline app::DifficultyCondition* create() {
            return il2cpp::create_object<app::DifficultyCondition>(get_class());
        }
    } // namespace DifficultyCondition
} // namespace app::classes::types
