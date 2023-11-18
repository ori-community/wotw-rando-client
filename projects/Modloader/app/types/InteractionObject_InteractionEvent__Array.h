#pragma once
#include <Modloader/app/structs/InteractionObject_InteractionEvent__Array.h>
#include <Modloader/app/structs/InteractionObject_InteractionEvent__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteractionObject_InteractionEvent__Array {
        inline app::InteractionObject_InteractionEvent__Array__Class** type_info() {
            static app::InteractionObject_InteractionEvent__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InteractionObject_InteractionEvent__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InteractionObject_InteractionEvent__Array__Class* get_class() {
            return il2cpp::get_class<app::InteractionObject_InteractionEvent__Array__Class>(type_info(), "RootMotion.FinalIK", "InteractionObject+InteractionEvent[]");
        }
        inline app::InteractionObject_InteractionEvent__Array* create() {
            return il2cpp::create_object<app::InteractionObject_InteractionEvent__Array>(get_class());
        }
    } // namespace InteractionObject_InteractionEvent__Array
} // namespace app::classes::types
