#pragma once
#include <Modloader/app/structs/QuestReward.h>
#include <Modloader/app/structs/QuestReward__Array.h>
#include <Modloader/app/structs/QuestReward__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QuestReward {
        inline app::QuestReward__Class** type_info() {
            static app::QuestReward__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::QuestReward__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::QuestReward__Class* get_class() {
            return il2cpp::get_class<app::QuestReward__Class>(type_info(), "", "QuestReward");
        }
        inline app::QuestReward* create() {
            return il2cpp::create_object<app::QuestReward>(get_class());
        }
        inline app::QuestReward__Array* create_array(int size) {
            return il2cpp::array_new<app::QuestReward__Array>(get_class(), size);
        }
        inline app::QuestReward__Array* create_array(const std::vector<app::QuestReward*>& items) {
            return il2cpp::array_new<app::QuestReward__Array>(get_class(), items);
        }
    } // namespace QuestReward
} // namespace app::classes::types
