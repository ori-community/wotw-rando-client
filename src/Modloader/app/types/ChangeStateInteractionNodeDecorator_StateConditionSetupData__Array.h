#pragma once
#include <Modloader/app/structs/ChangeStateInteractionNodeDecorator_StateConditionSetupData__Array.h>
#include <Modloader/app/structs/ChangeStateInteractionNodeDecorator_StateConditionSetupData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChangeStateInteractionNodeDecorator_StateConditionSetupData__Array {
        inline app::ChangeStateInteractionNodeDecorator_StateConditionSetupData__Array__Class** type_info() {
            static app::ChangeStateInteractionNodeDecorator_StateConditionSetupData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChangeStateInteractionNodeDecorator_StateConditionSetupData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChangeStateInteractionNodeDecorator_StateConditionSetupData__Array__Class* get_class() {
            return il2cpp::get_class<app::ChangeStateInteractionNodeDecorator_StateConditionSetupData__Array__Class>(type_info(), "Moon.InteractionGraph", "ChangeStateInteractionNodeDecorator+StateConditionSetupData[]");
        }
        inline app::ChangeStateInteractionNodeDecorator_StateConditionSetupData__Array* create() {
            return il2cpp::create_object<app::ChangeStateInteractionNodeDecorator_StateConditionSetupData__Array>(get_class());
        }
    } // namespace ChangeStateInteractionNodeDecorator_StateConditionSetupData__Array
} // namespace app::classes::types
