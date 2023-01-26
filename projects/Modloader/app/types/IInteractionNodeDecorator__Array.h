#pragma once
#include <Modloader/app/structs/IInteractionNodeDecorator__Array.h>
#include <Modloader/app/structs/IInteractionNodeDecorator__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IInteractionNodeDecorator__Array {
        inline app::IInteractionNodeDecorator__Array__Class** type_info() {
            static app::IInteractionNodeDecorator__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IInteractionNodeDecorator__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IInteractionNodeDecorator__Array__Class* get_class() {
            return il2cpp::get_class<app::IInteractionNodeDecorator__Array__Class>(type_info(), "Moon.InteractionGraph", "IInteractionNodeDecorator[]");
        }
        inline app::IInteractionNodeDecorator__Array* create() {
            return il2cpp::create_object<app::IInteractionNodeDecorator__Array>(get_class());
        }
    } // namespace IInteractionNodeDecorator__Array
} // namespace app::classes::types
