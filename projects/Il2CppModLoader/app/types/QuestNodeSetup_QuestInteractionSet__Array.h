#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace QuestNodeSetup_QuestInteractionSet__Array {
        namespace {
            app::QuestNodeSetup_QuestInteractionSet__Array__Class* type_info_ref = nullptr;
        }
        app::QuestNodeSetup_QuestInteractionSet__Array__Class** type_info = &type_info_ref;
        inline app::QuestNodeSetup_QuestInteractionSet__Array__Class* get_class() {
            return il2cpp::get_class<app::QuestNodeSetup_QuestInteractionSet__Array__Class>(type_info, "", "QuestNodeSetup+QuestInteractionSet[]");
        }
        inline app::QuestNodeSetup_QuestInteractionSet__Array* create() {
            return il2cpp::create_object<app::QuestNodeSetup_QuestInteractionSet__Array>(get_class());
        }
    } // namespace QuestNodeSetup_QuestInteractionSet__Array
} // namespace app::classes::types
