#pragma once
#include <Modloader/app/structs/QuestNodeSetup_QuestInteraction__Array.h>
#include <Modloader/app/structs/QuestNodeSetup_QuestInteraction__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QuestNodeSetup_QuestInteraction__Array {
        inline app::QuestNodeSetup_QuestInteraction__Array__Class** type_info() {
            static app::QuestNodeSetup_QuestInteraction__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::QuestNodeSetup_QuestInteraction__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::QuestNodeSetup_QuestInteraction__Array__Class* get_class() {
            return il2cpp::get_class<app::QuestNodeSetup_QuestInteraction__Array__Class>(type_info(), "", "QuestNodeSetup+QuestInteraction[]");
        }
        inline app::QuestNodeSetup_QuestInteraction__Array* create() {
            return il2cpp::create_object<app::QuestNodeSetup_QuestInteraction__Array>(get_class());
        }
    } // namespace QuestNodeSetup_QuestInteraction__Array
} // namespace app::classes::types
