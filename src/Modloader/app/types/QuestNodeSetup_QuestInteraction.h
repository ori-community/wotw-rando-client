#pragma once
#include <Modloader/app/structs/QuestNodeSetup_QuestInteraction.h>
#include <Modloader/app/structs/QuestNodeSetup_QuestInteraction__Array.h>
#include <Modloader/app/structs/QuestNodeSetup_QuestInteraction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QuestNodeSetup_QuestInteraction {
        inline app::QuestNodeSetup_QuestInteraction__Class** type_info() {
            static app::QuestNodeSetup_QuestInteraction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::QuestNodeSetup_QuestInteraction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::QuestNodeSetup_QuestInteraction__Class* get_class() {
            return il2cpp::get_nested_class<app::QuestNodeSetup_QuestInteraction__Class>(type_info(), "", "QuestNodeSetup", "QuestInteraction");
        }
        inline app::QuestNodeSetup_QuestInteraction* create() {
            return il2cpp::create_object<app::QuestNodeSetup_QuestInteraction>(get_class());
        }
        inline app::QuestNodeSetup_QuestInteraction__Array* create_array(int size) {
            return il2cpp::array_new<app::QuestNodeSetup_QuestInteraction__Array>(get_class(), size);
        }
        inline app::QuestNodeSetup_QuestInteraction__Array* create_array(const std::vector<app::QuestNodeSetup_QuestInteraction*>& items) {
            return il2cpp::array_new<app::QuestNodeSetup_QuestInteraction__Array>(get_class(), items);
        }
    } // namespace QuestNodeSetup_QuestInteraction
} // namespace app::classes::types
