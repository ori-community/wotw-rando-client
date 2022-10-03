#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChangeStateDialogDecorator_StateConditionSetupData {
        namespace {
            app::ChangeStateDialogDecorator_StateConditionSetupData__Class* type_info_ref = nullptr;
        }
        app::ChangeStateDialogDecorator_StateConditionSetupData__Class** type_info = &type_info_ref;
        inline app::ChangeStateDialogDecorator_StateConditionSetupData__Class* get_class() {
            return il2cpp::get_nested_class<app::ChangeStateDialogDecorator_StateConditionSetupData__Class>(type_info, "Moon.dialogGraph", "ChangeStateDialogDecorator", "StateConditionSetupData");
        }
        inline app::ChangeStateDialogDecorator_StateConditionSetupData* create() {
            return il2cpp::create_object<app::ChangeStateDialogDecorator_StateConditionSetupData>(get_class());
        }
        inline app::ChangeStateDialogDecorator_StateConditionSetupData__Array* create_array(int size) {
            return il2cpp::array_new<app::ChangeStateDialogDecorator_StateConditionSetupData__Array>(get_class(), size);
        }
    } // namespace ChangeStateDialogDecorator_StateConditionSetupData
} // namespace app::classes::types
