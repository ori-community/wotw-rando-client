#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ChangeStateInteractionNodeDecorator_StateConditionSetupHolder__Class.h>
#include <Modloader/app/structs/ChangeStateInteractionNodeDecorator_StateConditionSetupHolder.h>

namespace app::classes::types {
    namespace ChangeStateInteractionNodeDecorator_StateConditionSetupHolder {
        namespace {
            inline app::ChangeStateInteractionNodeDecorator_StateConditionSetupHolder__Class* type_info_ref = nullptr;
        }
        inline app::ChangeStateInteractionNodeDecorator_StateConditionSetupHolder__Class** type_info = &type_info_ref;
        inline app::ChangeStateInteractionNodeDecorator_StateConditionSetupHolder__Class* get_class() {
            return il2cpp::get_nested_class<app::ChangeStateInteractionNodeDecorator_StateConditionSetupHolder__Class>(type_info, "Moon.InteractionGraph", "ChangeStateInteractionNodeDecorator", "StateConditionSetupHolder");
        }
        inline app::ChangeStateInteractionNodeDecorator_StateConditionSetupHolder* create() {
            return il2cpp::create_object<app::ChangeStateInteractionNodeDecorator_StateConditionSetupHolder>(get_class());
        }
    } // namespace ChangeStateInteractionNodeDecorator_StateConditionSetupHolder
} // namespace app::classes::types
