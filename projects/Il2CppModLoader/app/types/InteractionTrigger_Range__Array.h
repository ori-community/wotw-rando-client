#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InteractionTrigger_Range__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InteractionTrigger_Range__Array__Class** type_info;
        inline app::InteractionTrigger_Range__Array__Class* get_class() {
            return il2cpp::get_class<app::InteractionTrigger_Range__Array__Class>(type_info, "RootMotion.FinalIK", "InteractionTrigger+Range[]");
        }
        inline app::InteractionTrigger_Range__Array* create() {
            return il2cpp::create_object<app::InteractionTrigger_Range__Array>(get_class());
        }
    } // namespace InteractionTrigger_Range__Array
} // namespace app::classes::types
