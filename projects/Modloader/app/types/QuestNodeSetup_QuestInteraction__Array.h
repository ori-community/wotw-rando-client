#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/QuestNodeSetup_QuestInteraction__Array__Class.h>
#include <Modloader/app/structs/QuestNodeSetup_QuestInteraction__Array.h>

namespace app::classes::types {
    namespace QuestNodeSetup_QuestInteraction__Array {
        namespace {
            inline app::QuestNodeSetup_QuestInteraction__Array__Class* type_info_ref = nullptr;
        }
        inline app::QuestNodeSetup_QuestInteraction__Array__Class** type_info = &type_info_ref;
        inline app::QuestNodeSetup_QuestInteraction__Array__Class* get_class() {
            return il2cpp::get_class<app::QuestNodeSetup_QuestInteraction__Array__Class>(type_info, "", "QuestNodeSetup+QuestInteraction[]");
        }
        inline app::QuestNodeSetup_QuestInteraction__Array* create() {
            return il2cpp::create_object<app::QuestNodeSetup_QuestInteraction__Array>(get_class());
        }
    } // namespace QuestNodeSetup_QuestInteraction__Array
} // namespace app::classes::types
