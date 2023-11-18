#pragma once
#include <Modloader/app/structs/NPCEntity_RewardState__Enum.h>
#include <Modloader/app/structs/NPCEntity_RewardState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NPCEntity_RewardState__Enum {
        inline app::NPCEntity_RewardState__Enum__Class** type_info() {
            static app::NPCEntity_RewardState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NPCEntity_RewardState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NPCEntity_RewardState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::NPCEntity_RewardState__Enum__Class>(type_info(), "Moon", "NPCEntity", "RewardState");
        }
        inline app::NPCEntity_RewardState__Enum* create() {
            return il2cpp::create_object<app::NPCEntity_RewardState__Enum>(get_class());
        }
    } // namespace NPCEntity_RewardState__Enum
} // namespace app::classes::types
