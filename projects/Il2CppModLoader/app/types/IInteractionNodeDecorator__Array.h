#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IInteractionNodeDecorator__Array {
        namespace {
            app::IInteractionNodeDecorator__Array__Class* type_info_ref = nullptr;
        }
        app::IInteractionNodeDecorator__Array__Class** type_info = &type_info_ref;
        inline app::IInteractionNodeDecorator__Array__Class* get_class() {
            return il2cpp::get_class<app::IInteractionNodeDecorator__Array__Class>(type_info, "Moon.InteractionGraph", "IInteractionNodeDecorator[]");
        }
        inline app::IInteractionNodeDecorator__Array* create() {
            return il2cpp::create_object<app::IInteractionNodeDecorator__Array>(get_class());
        }
    } // namespace IInteractionNodeDecorator__Array
} // namespace app::classes::types
