#pragma once
#include <Modloader/app/structs/InteractionTrigger__Array.h>
#include <Modloader/app/structs/InteractionTrigger__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteractionTrigger__Array {
        inline app::InteractionTrigger__Array__Class** type_info() {
            static app::InteractionTrigger__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InteractionTrigger__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InteractionTrigger__Array__Class* get_class() {
            return il2cpp::get_class<app::InteractionTrigger__Array__Class>(type_info(), "RootMotion.FinalIK", "InteractionTrigger[]");
        }
        inline app::InteractionTrigger__Array* create() {
            return il2cpp::create_object<app::InteractionTrigger__Array>(get_class());
        }
    } // namespace InteractionTrigger__Array
} // namespace app::classes::types
