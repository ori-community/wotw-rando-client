#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace QuestNodeSetup_QuestInteractionSet {
        namespace {
            app::QuestNodeSetup_QuestInteractionSet__Class* type_info_ref = nullptr;
        }
        app::QuestNodeSetup_QuestInteractionSet__Class** type_info = &type_info_ref;
        inline app::QuestNodeSetup_QuestInteractionSet__Class* get_class() {
            return il2cpp::get_nested_class<app::QuestNodeSetup_QuestInteractionSet__Class>(type_info, "", "QuestNodeSetup", "QuestInteractionSet");
        }
        inline app::QuestNodeSetup_QuestInteractionSet* create() {
            return il2cpp::create_object<app::QuestNodeSetup_QuestInteractionSet>(get_class());
        }
        inline app::QuestNodeSetup_QuestInteractionSet__Array* create_array(int size) {
            return il2cpp::array_new<app::QuestNodeSetup_QuestInteractionSet__Array>(get_class(), size);
        }
        inline app::QuestNodeSetup_QuestInteractionSet__Array* create_array(const std::vector<app::QuestNodeSetup_QuestInteractionSet*>& items) {
            return il2cpp::array_new<app::QuestNodeSetup_QuestInteractionSet__Array>(get_class(), items);
        }
    } // namespace QuestNodeSetup_QuestInteractionSet
} // namespace app::classes::types
