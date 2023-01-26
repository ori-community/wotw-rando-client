#pragma once
#include <Modloader/app/structs/ChangeStateInteractionNodeDecorator_StateConditionSetupHolder.h>
#include <Modloader/app/structs/ChangeStateInteractionNodeDecorator_StateConditionSetupHolder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChangeStateInteractionNodeDecorator_StateConditionSetupHolder {
        inline app::ChangeStateInteractionNodeDecorator_StateConditionSetupHolder__Class** type_info() {
            static app::ChangeStateInteractionNodeDecorator_StateConditionSetupHolder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChangeStateInteractionNodeDecorator_StateConditionSetupHolder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChangeStateInteractionNodeDecorator_StateConditionSetupHolder__Class* get_class() {
            return il2cpp::get_nested_class<app::ChangeStateInteractionNodeDecorator_StateConditionSetupHolder__Class>(type_info(), "Moon.InteractionGraph", "ChangeStateInteractionNodeDecorator", "StateConditionSetupHolder");
        }
        inline app::ChangeStateInteractionNodeDecorator_StateConditionSetupHolder* create() {
            return il2cpp::create_object<app::ChangeStateInteractionNodeDecorator_StateConditionSetupHolder>(get_class());
        }
    } // namespace ChangeStateInteractionNodeDecorator_StateConditionSetupHolder
} // namespace app::classes::types
