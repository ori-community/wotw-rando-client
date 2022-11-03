#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NPCEntity_RewardState__Enum {
        namespace {
            inline app::NPCEntity_RewardState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::NPCEntity_RewardState__Enum__Class** type_info = &type_info_ref;
        inline app::NPCEntity_RewardState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::NPCEntity_RewardState__Enum__Class>(type_info, "Moon", "NPCEntity", "RewardState");
        }
        inline app::NPCEntity_RewardState__Enum* create() {
            return il2cpp::create_object<app::NPCEntity_RewardState__Enum>(get_class());
        }
    } // namespace NPCEntity_RewardState__Enum
} // namespace app::classes::types
