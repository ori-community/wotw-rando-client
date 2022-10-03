#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace QuestNodeSetup_RewardType__Enum {
        namespace {
            app::QuestNodeSetup_RewardType__Enum__Class* type_info_ref = nullptr;
        }
        app::QuestNodeSetup_RewardType__Enum__Class** type_info = &type_info_ref;
        inline app::QuestNodeSetup_RewardType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::QuestNodeSetup_RewardType__Enum__Class>(type_info, "", "QuestNodeSetup", "RewardType");
        }
        inline app::QuestNodeSetup_RewardType__Enum* create() {
            return il2cpp::create_object<app::QuestNodeSetup_RewardType__Enum>(get_class());
        }
    } // namespace QuestNodeSetup_RewardType__Enum
} // namespace app::classes::types
