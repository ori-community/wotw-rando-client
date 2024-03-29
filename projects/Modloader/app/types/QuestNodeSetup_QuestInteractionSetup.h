#pragma once
#include <Modloader/app/structs/QuestNodeSetup_QuestInteractionSetup.h>
#include <Modloader/app/structs/QuestNodeSetup_QuestInteractionSetup__Array.h>
#include <Modloader/app/structs/QuestNodeSetup_QuestInteractionSetup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QuestNodeSetup_QuestInteractionSetup {
        inline app::QuestNodeSetup_QuestInteractionSetup__Class** type_info() {
            static app::QuestNodeSetup_QuestInteractionSetup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::QuestNodeSetup_QuestInteractionSetup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::QuestNodeSetup_QuestInteractionSetup__Class* get_class() {
            return il2cpp::get_nested_class<app::QuestNodeSetup_QuestInteractionSetup__Class>(type_info(), "", "QuestNodeSetup", "QuestInteractionSetup");
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
