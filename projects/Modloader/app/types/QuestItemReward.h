#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/QuestItemReward__Class.h>
#include <Modloader/app/structs/QuestItemReward.h>

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
