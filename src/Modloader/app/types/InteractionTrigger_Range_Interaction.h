#pragma once
#include <Modloader/app/structs/InteractionTrigger_Range_Interaction.h>
#include <Modloader/app/structs/InteractionTrigger_Range_Interaction__Array.h>
#include <Modloader/app/structs/InteractionTrigger_Range_Interaction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteractionTrigger_Range_Interaction {
        inline app::InteractionTrigger_Range_Interaction__Class** type_info() {
            static app::InteractionTrigger_Range_Interaction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InteractionTrigger_Range_Interaction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InteractionTrigger_Range_Interaction__Class* get_class() {
            return il2cpp::get_nested_class<app::InteractionTrigger_Range_Interaction__Class>(type_info(), "RootMotion.FinalIK", "InteractionTrigger+Range", "Interaction");
        }
        inline app::InteractionTrigger_Range_Interaction* create() {
            return il2cpp::create_object<app::InteractionTrigger_Range_Interaction>(get_class());
        }
        inline app::InteractionTrigger_Range_Interaction__Array* create_array(int size) {
            return il2cpp::array_new<app::InteractionTrigger_Range_Interaction__Array>(get_class(), size);
        }
        inline app::InteractionTrigger_Range_Interaction__Array* create_array(const std::vector<app::InteractionTrigger_Range_Interaction*>& items) {
            return il2cpp::array_new<app::InteractionTrigger_Range_Interaction__Array>(get_class(), items);
        }
    } // namespace InteractionTrigger_Range_Interaction
} // namespace app::classes::types
