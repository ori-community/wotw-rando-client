#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChangeStateInteractionNodeDecorator {
        namespace {
            app::ChangeStateInteractionNodeDecorator__Class* type_info_ref = nullptr;
        }
        app::ChangeStateInteractionNodeDecorator__Class** type_info = &type_info_ref;
        inline app::ChangeStateInteractionNodeDecorator__Class* get_class() {
            return il2cpp::get_class<app::ChangeStateInteractionNodeDecorator__Class>(type_info, "Moon.InteractionGraph", "ChangeStateInteractionNodeDecorator");
        }
        inline app::ChangeStateInteractionNodeDecorator* create() {
            return il2cpp::create_object<app::ChangeStateInteractionNodeDecorator>(get_class());
        }
    } // namespace ChangeStateInteractionNodeDecorator
} // namespace app::classes::types
