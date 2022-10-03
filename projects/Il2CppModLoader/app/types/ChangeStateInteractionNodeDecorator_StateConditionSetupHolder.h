#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChangeStateInteractionNodeDecorator_StateConditionSetupHolder {
        namespace {
            app::ChangeStateInteractionNodeDecorator_StateConditionSetupHolder__Class* type_info_ref = nullptr;
        }
        app::ChangeStateInteractionNodeDecorator_StateConditionSetupHolder__Class** type_info = &type_info_ref;
        inline app::ChangeStateInteractionNodeDecorator_StateConditionSetupHolder__Class* get_class() {
            return il2cpp::get_nested_class<app::ChangeStateInteractionNodeDecorator_StateConditionSetupHolder__Class>(type_info, "Moon.InteractionGraph", "ChangeStateInteractionNodeDecorator", "StateConditionSetupHolder");
        }
        inline app::ChangeStateInteractionNodeDecorator_StateConditionSetupHolder* create() {
            return il2cpp::create_object<app::ChangeStateInteractionNodeDecorator_StateConditionSetupHolder>(get_class());
        }
    } // namespace ChangeStateInteractionNodeDecorator_StateConditionSetupHolder
} // namespace app::classes::types
