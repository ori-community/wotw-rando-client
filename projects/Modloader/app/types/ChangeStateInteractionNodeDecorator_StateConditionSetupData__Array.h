#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ChangeStateInteractionNodeDecorator_StateConditionSetupData__Array {
        namespace {
            inline app::ChangeStateInteractionNodeDecorator_StateConditionSetupData__Array__Class* type_info_ref = nullptr;
        }
        inline app::ChangeStateInteractionNodeDecorator_StateConditionSetupData__Array__Class** type_info = &type_info_ref;
        inline app::ChangeStateInteractionNodeDecorator_StateConditionSetupData__Array__Class* get_class() {
            return il2cpp::get_class<app::ChangeStateInteractionNodeDecorator_StateConditionSetupData__Array__Class>(type_info, "Moon.InteractionGraph", "ChangeStateInteractionNodeDecorator+StateConditionSetupData[]");
        }
        inline app::ChangeStateInteractionNodeDecorator_StateConditionSetupData__Array* create() {
            return il2cpp::create_object<app::ChangeStateInteractionNodeDecorator_StateConditionSetupData__Array>(get_class());
        }
    } // namespace ChangeStateInteractionNodeDecorator_StateConditionSetupData__Array
} // namespace app::classes::types
