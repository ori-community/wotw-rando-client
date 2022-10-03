#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InteractionObject_InteractionEvent__Array {
        namespace {
            app::InteractionObject_InteractionEvent__Array__Class* type_info_ref = nullptr;
        }
        app::InteractionObject_InteractionEvent__Array__Class** type_info = &type_info_ref;
        inline app::InteractionObject_InteractionEvent__Array__Class* get_class() {
            return il2cpp::get_class<app::InteractionObject_InteractionEvent__Array__Class>(type_info, "RootMotion.FinalIK", "InteractionObject+InteractionEvent[]");
        }
        inline app::InteractionObject_InteractionEvent__Array* create() {
            return il2cpp::create_object<app::InteractionObject_InteractionEvent__Array>(get_class());
        }
    } // namespace InteractionObject_InteractionEvent__Array
} // namespace app::classes::types
