#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InteractionTrigger_Range_Interaction__Array__Class.h>
#include <Modloader/app/structs/InteractionTrigger_Range_Interaction__Array.h>

namespace app::classes::types {
    namespace InteractionTrigger_Range_Interaction__Array {
        namespace {
            inline app::InteractionTrigger_Range_Interaction__Array__Class* type_info_ref = nullptr;
        }
        inline app::InteractionTrigger_Range_Interaction__Array__Class** type_info = &type_info_ref;
        inline app::InteractionTrigger_Range_Interaction__Array__Class* get_class() {
            return il2cpp::get_class<app::InteractionTrigger_Range_Interaction__Array__Class>(type_info, "RootMotion.FinalIK", "InteractionTrigger+Range+Interaction[]");
        }
        inline app::InteractionTrigger_Range_Interaction__Array* create() {
            return il2cpp::create_object<app::InteractionTrigger_Range_Interaction__Array>(get_class());
        }
    } // namespace InteractionTrigger_Range_Interaction__Array
} // namespace app::classes::types
