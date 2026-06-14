#pragma once
#include <Modloader/app/structs/InteractionTarget_Multiplier__Array.h>
#include <Modloader/app/structs/InteractionTarget_Multiplier__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteractionTarget_Multiplier__Array {
        inline app::InteractionTarget_Multiplier__Array__Class** type_info() {
            static app::InteractionTarget_Multiplier__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InteractionTarget_Multiplier__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InteractionTarget_Multiplier__Array__Class* get_class() {
            return il2cpp::get_class<app::InteractionTarget_Multiplier__Array__Class>(type_info(), "RootMotion.FinalIK", "InteractionTarget+Multiplier[]");
        }
        inline app::InteractionTarget_Multiplier__Array* create() {
            return il2cpp::create_object<app::InteractionTarget_Multiplier__Array>(get_class());
        }
    } // namespace InteractionTarget_Multiplier__Array
} // namespace app::classes::types
