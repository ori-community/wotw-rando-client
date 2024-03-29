#pragma once
#include <Modloader/app/structs/ChangeStateInteractionNodeDecorator_StateConditionSetupData.h>
#include <Modloader/app/structs/ChangeStateInteractionNodeDecorator_StateConditionSetupData__Array.h>
#include <Modloader/app/structs/ChangeStateInteractionNodeDecorator_StateConditionSetupData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChangeStateInteractionNodeDecorator_StateConditionSetupData {
        inline app::ChangeStateInteractionNodeDecorator_StateConditionSetupData__Class** type_info() {
            static app::ChangeStateInteractionNodeDecorator_StateConditionSetupData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChangeStateInteractionNodeDecorator_StateConditionSetupData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChangeStateInteractionNodeDecorator_StateConditionSetupData__Class* get_class() {
            return il2cpp::get_nested_class<app::ChangeStateInteractionNodeDecorator_StateConditionSetupData__Class>(type_info(), "Moon.InteractionGraph", "ChangeStateInteractionNodeDecorator", "StateConditionSetupData");
        }
        inline app::ChangeStateInteractionNodeDecorator_StateConditionSetupData* create() {
            return il2cpp::create_object<app::ChangeStateInteractionNodeDecorator_StateConditionSetupData>(get_class());
        }
        inline app::ChangeStateInteractionNodeDecorator_StateConditionSetupData__Array* create_array(int size) {
            return il2cpp::array_new<app::ChangeStateInteractionNodeDecorator_StateConditionSetupData__Array>(get_class(), size);
        }
        inline app::ChangeStateInteractionNodeDecorator_StateConditionSetupData__Array* create_array(const std::vector<app::ChangeStateInteractionNodeDecorator_StateConditionSetupData*>& items) {
            return il2cpp::array_new<app::ChangeStateInteractionNodeDecorator_StateConditionSetupData__Array>(get_class(), items);
        }
    } // namespace ChangeStateInteractionNodeDecorator_StateConditionSetupData
} // namespace app::classes::types
