#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace QuestNodeSetup_QuestInteractionSetup__Array {
        namespace {
            inline app::QuestNodeSetup_QuestInteractionSetup__Array__Class* type_info_ref = nullptr;
        }
        inline app::QuestNodeSetup_QuestInteractionSetup__Array__Class** type_info = &type_info_ref;
        inline app::QuestNodeSetup_QuestInteractionSetup__Array__Class* get_class() {
            return il2cpp::get_class<app::QuestNodeSetup_QuestInteractionSetup__Array__Class>(type_info, "", "QuestNodeSetup+QuestInteractionSetup[]");
        }
        inline app::QuestNodeSetup_QuestInteractionSetup__Array* create() {
            return il2cpp::create_object<app::QuestNodeSetup_QuestInteractionSetup__Array>(get_class());
        }
    } // namespace QuestNodeSetup_QuestInteractionSetup__Array
} // namespace app::classes::types
