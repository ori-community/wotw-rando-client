#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InteractionObject_InteractionEvent__Array {
        namespace {
            inline app::InteractionObject_InteractionEvent__Array__Class* type_info_ref = nullptr;
        }
        inline app::InteractionObject_InteractionEvent__Array__Class** type_info = &type_info_ref;
        inline app::InteractionObject_InteractionEvent__Array__Class* get_class() {
            return il2cpp::get_class<app::InteractionObject_InteractionEvent__Array__Class>(type_info, "RootMotion.FinalIK", "InteractionObject+InteractionEvent[]");
        }
        inline app::InteractionObject_InteractionEvent__Array* create() {
            return il2cpp::create_object<app::InteractionObject_InteractionEvent__Array>(get_class());
        }
    } // namespace InteractionObject_InteractionEvent__Array
} // namespace app::classes::types
