#pragma once
#include <Modloader/app/structs/IInteractionNode__Array.h>
#include <Modloader/app/structs/IInteractionNode__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IInteractionNode__Array {
        inline app::IInteractionNode__Array__Class** type_info() {
            static app::IInteractionNode__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IInteractionNode__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IInteractionNode__Array__Class* get_class() {
            return il2cpp::get_class<app::IInteractionNode__Array__Class>(type_info(), "Moon.InteractionGraph", "IInteractionNode[]");
        }
        inline app::IInteractionNode__Array* create() {
            return il2cpp::create_object<app::IInteractionNode__Array>(get_class());
        }
    } // namespace IInteractionNode__Array
} // namespace app::classes::types
