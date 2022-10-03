#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChangeStateInteractionNodeDecorator_StateConditionSetupData {
        namespace {
            app::ChangeStateInteractionNodeDecorator_StateConditionSetupData__Class* type_info_ref = nullptr;
        }
        app::ChangeStateInteractionNodeDecorator_StateConditionSetupData__Class** type_info = &type_info_ref;
        inline app::ChangeStateInteractionNodeDecorator_StateConditionSetupData__Class* get_class() {
            return il2cpp::get_nested_class<app::ChangeStateInteractionNodeDecorator_StateConditionSetupData__Class>(type_info, "Moon.InteractionGraph", "ChangeStateInteractionNodeDecorator", "StateConditionSetupData");
        }
        inline app::ChangeStateInteractionNodeDecorator_StateConditionSetupData* create() {
            return il2cpp::create_object<app::ChangeStateInteractionNodeDecorator_StateConditionSetupData>(get_class());
        }
        inline app::ChangeStateInteractionNodeDecorator_StateConditionSetupData__Array* create_array(int size) {
            return il2cpp::array_new<app::ChangeStateInteractionNodeDecorator_StateConditionSetupData__Array>(get_class(), size);
        }
    } // namespace ChangeStateInteractionNodeDecorator_StateConditionSetupData
} // namespace app::classes::types
