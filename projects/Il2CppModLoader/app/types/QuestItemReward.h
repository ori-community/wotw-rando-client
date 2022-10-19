#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace QuestItemReward {
        namespace {
            inline app::QuestItemReward__Class* type_info_ref = nullptr;
        }
        inline app::QuestItemReward__Class** type_info = &type_info_ref;
        inline app::QuestItemReward__Class* get_class() {
            return il2cpp::get_class<app::QuestItemReward__Class>(type_info, "", "QuestItemReward");
        }
        inline app::QuestItemReward* create() {
            return il2cpp::create_object<app::QuestItemReward>(get_class());
        }
    } // namespace QuestItemReward
} // namespace app::classes::types
