#pragma once
#include <Modloader/app/structs/QuestNodeSetup_QuestInteractionSetup__Array.h>
#include <Modloader/app/structs/QuestNodeSetup_QuestInteractionSetup__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QuestNodeSetup_QuestInteractionSetup__Array {
        inline app::QuestNodeSetup_QuestInteractionSetup__Array__Class** type_info() {
            static app::QuestNodeSetup_QuestInteractionSetup__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::QuestNodeSetup_QuestInteractionSetup__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::QuestNodeSetup_QuestInteractionSetup__Array__Class* get_class() {
            return il2cpp::get_class<app::QuestNodeSetup_QuestInteractionSetup__Array__Class>(type_info(), "", "QuestNodeSetup+QuestInteractionSetup[]");
        }
        inline app::QuestNodeSetup_QuestInteractionSetup__Array* create() {
            return il2cpp::create_object<app::QuestNodeSetup_QuestInteractionSetup__Array>(get_class());
        }
    } // namespace QuestNodeSetup_QuestInteractionSetup__Array
} // namespace app::classes::types
