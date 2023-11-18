#pragma once
#include <Modloader/app/structs/QuestItemReward.h>
#include <Modloader/app/structs/QuestItemReward__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QuestItemReward {
        inline app::QuestItemReward__Class** type_info() {
            static app::QuestItemReward__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::QuestItemReward__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::QuestItemReward__Class* get_class() {
            return il2cpp::get_class<app::QuestItemReward__Class>(type_info(), "", "QuestItemReward");
        }
        inline app::QuestItemReward* create() {
            return il2cpp::create_object<app::QuestItemReward>(get_class());
        }
    } // namespace QuestItemReward
} // namespace app::classes::types
