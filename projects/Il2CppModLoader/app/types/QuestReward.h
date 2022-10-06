#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace QuestReward {
        namespace {
            app::QuestReward__Class* type_info_ref = nullptr;
        }
        app::QuestReward__Class** type_info = &type_info_ref;
        inline app::QuestReward__Class* get_class() {
            return il2cpp::get_class<app::QuestReward__Class>(type_info, "", "QuestReward");
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
