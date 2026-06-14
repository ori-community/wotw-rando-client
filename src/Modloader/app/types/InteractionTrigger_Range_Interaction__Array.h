#pragma once
#include <Modloader/app/structs/InteractionTrigger_Range_Interaction__Array.h>
#include <Modloader/app/structs/InteractionTrigger_Range_Interaction__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteractionTrigger_Range_Interaction__Array {
        inline app::InteractionTrigger_Range_Interaction__Array__Class** type_info() {
            static app::InteractionTrigger_Range_Interaction__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InteractionTrigger_Range_Interaction__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InteractionTrigger_Range_Interaction__Array__Class* get_class() {
            return il2cpp::get_class<app::InteractionTrigger_Range_Interaction__Array__Class>(type_info(), "RootMotion.FinalIK", "InteractionTrigger+Range+Interaction[]");
        }
        inline app::InteractionTrigger_Range_Interaction__Array* create() {
            return il2cpp::create_object<app::InteractionTrigger_Range_Interaction__Array>(get_class());
        }
    } // namespace InteractionTrigger_Range_Interaction__Array
} // namespace app::classes::types
