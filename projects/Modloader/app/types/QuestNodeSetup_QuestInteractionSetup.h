#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace QuestNodeSetup_QuestInteractionSetup {
        namespace {
            inline app::QuestNodeSetup_QuestInteractionSetup__Class* type_info_ref = nullptr;
        }
        inline app::QuestNodeSetup_QuestInteractionSetup__Class** type_info = &type_info_ref;
        inline app::QuestNodeSetup_QuestInteractionSetup__Class* get_class() {
            return il2cpp::get_nested_class<app::QuestNodeSetup_QuestInteractionSetup__Class>(type_info, "", "QuestNodeSetup", "QuestInteractionSetup");
        }
        inline app::QuestNodeSetup_QuestInteractionSetup* create() {
            return il2cpp::create_object<app::QuestNodeSetup_QuestInteractionSetup>(get_class());
        }
        inline app::QuestNodeSetup_QuestInteractionSetup__Array* create_array(int size) {
            return il2cpp::array_new<app::QuestNodeSetup_QuestInteractionSetup__Array>(get_class(), size);
        }
        inline app::QuestNodeSetup_QuestInteractionSetup__Array* create_array(const std::vector<app::QuestNodeSetup_QuestInteractionSetup*>& items) {
            return il2cpp::array_new<app::QuestNodeSetup_QuestInteractionSetup__Array>(get_class(), items);
        }
    } // namespace QuestNodeSetup_QuestInteractionSetup
} // namespace app::classes::types
