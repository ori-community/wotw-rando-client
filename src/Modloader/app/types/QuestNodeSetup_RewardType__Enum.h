#pragma once
#include <Modloader/app/structs/QuestNodeSetup_RewardType__Enum.h>
#include <Modloader/app/structs/QuestNodeSetup_RewardType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QuestNodeSetup_RewardType__Enum {
        inline app::QuestNodeSetup_RewardType__Enum__Class** type_info() {
            static app::QuestNodeSetup_RewardType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::QuestNodeSetup_RewardType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::QuestNodeSetup_RewardType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::QuestNodeSetup_RewardType__Enum__Class>(type_info(), "", "QuestNodeSetup", "RewardType");
        }
        inline app::QuestNodeSetup_RewardType__Enum* create() {
            return il2cpp::create_object<app::QuestNodeSetup_RewardType__Enum>(get_class());
        }
    } // namespace QuestNodeSetup_RewardType__Enum
} // namespace app::classes::types
