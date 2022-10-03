#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace QuestReward__Array {
        namespace {
            app::QuestReward__Array__Class* type_info_ref = nullptr;
        }
        app::QuestReward__Array__Class** type_info = &type_info_ref;
        inline app::QuestReward__Array__Class* get_class() {
            return il2cpp::get_class<app::QuestReward__Array__Class>(type_info, "", "QuestReward[]");
        }
        inline app::QuestReward__Array* create() {
            return il2cpp::create_object<app::QuestReward__Array>(get_class());
        }
    } // namespace QuestReward__Array
} // namespace app::classes::types
