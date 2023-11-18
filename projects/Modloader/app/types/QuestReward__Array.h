#pragma once
#include <Modloader/app/structs/QuestReward__Array.h>
#include <Modloader/app/structs/QuestReward__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QuestReward__Array {
        inline app::QuestReward__Array__Class** type_info() {
            static app::QuestReward__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::QuestReward__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::QuestReward__Array__Class* get_class() {
            return il2cpp::get_class<app::QuestReward__Array__Class>(type_info(), "", "QuestReward[]");
        }
        inline app::QuestReward__Array* create() {
            return il2cpp::create_object<app::QuestReward__Array>(get_class());
        }
    } // namespace QuestReward__Array
} // namespace app::classes::types
