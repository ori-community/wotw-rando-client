#pragma once
#include <Modloader/app/structs/ChangeStateDialogDecorator_StateConditionSetupData.h>
#include <Modloader/app/structs/ChangeStateDialogDecorator_StateConditionSetupData__Array.h>
#include <Modloader/app/structs/ChangeStateDialogDecorator_StateConditionSetupData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChangeStateDialogDecorator_StateConditionSetupData {
        inline app::ChangeStateDialogDecorator_StateConditionSetupData__Class** type_info() {
            static app::ChangeStateDialogDecorator_StateConditionSetupData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChangeStateDialogDecorator_StateConditionSetupData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChangeStateDialogDecorator_StateConditionSetupData__Class* get_class() {
            return il2cpp::get_nested_class<app::ChangeStateDialogDecorator_StateConditionSetupData__Class>(type_info(), "Moon.dialogGraph", "ChangeStateDialogDecorator", "StateConditionSetupData");
        }
        inline app::ChangeStateDialogDecorator_StateConditionSetupData* create() {
            return il2cpp::create_object<app::ChangeStateDialogDecorator_StateConditionSetupData>(get_class());
        }
        inline app::ChangeStateDialogDecorator_StateConditionSetupData__Array* create_array(int size) {
            return il2cpp::array_new<app::ChangeStateDialogDecorator_StateConditionSetupData__Array>(get_class(), size);
        }
        inline app::ChangeStateDialogDecorator_StateConditionSetupData__Array* create_array(const std::vector<app::ChangeStateDialogDecorator_StateConditionSetupData*>& items) {
            return il2cpp::array_new<app::ChangeStateDialogDecorator_StateConditionSetupData__Array>(get_class(), items);
        }
    } // namespace ChangeStateDialogDecorator_StateConditionSetupData
} // namespace app::classes::types
