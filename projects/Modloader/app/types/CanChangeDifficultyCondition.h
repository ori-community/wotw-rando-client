#pragma once
#include <Modloader/app/structs/CanChangeDifficultyCondition.h>
#include <Modloader/app/structs/CanChangeDifficultyCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CanChangeDifficultyCondition {
        inline app::CanChangeDifficultyCondition__Class** type_info() {
            static app::CanChangeDifficultyCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CanChangeDifficultyCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CanChangeDifficultyCondition__Class* get_class() {
            return il2cpp::get_class<app::CanChangeDifficultyCondition__Class>(type_info(), "", "CanChangeDifficultyCondition");
        }
        inline app::CanChangeDifficultyCondition* create() {
            return il2cpp::create_object<app::CanChangeDifficultyCondition>(get_class());
        }
    } // namespace CanChangeDifficultyCondition
} // namespace app::classes::types
