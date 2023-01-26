#pragma once
#include <Modloader/app/structs/DifficultyLevels__Enum.h>
#include <Modloader/app/structs/DifficultyLevels__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DifficultyLevels__Enum {
        inline app::DifficultyLevels__Enum__Class** type_info() {
            static app::DifficultyLevels__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DifficultyLevels__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DifficultyLevels__Enum__Class* get_class() {
            return il2cpp::get_class<app::DifficultyLevels__Enum__Class>(type_info(), "", "DifficultyLevels");
        }
        inline app::DifficultyLevels__Enum* create() {
            return il2cpp::create_object<app::DifficultyLevels__Enum>(get_class());
        }
    } // namespace DifficultyLevels__Enum
} // namespace app::classes::types
