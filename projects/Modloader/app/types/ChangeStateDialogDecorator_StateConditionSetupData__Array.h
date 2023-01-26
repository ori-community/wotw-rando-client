#pragma once
#include <Modloader/app/structs/ChangeStateDialogDecorator_StateConditionSetupData__Array.h>
#include <Modloader/app/structs/ChangeStateDialogDecorator_StateConditionSetupData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChangeStateDialogDecorator_StateConditionSetupData__Array {
        inline app::ChangeStateDialogDecorator_StateConditionSetupData__Array__Class** type_info() {
            static app::ChangeStateDialogDecorator_StateConditionSetupData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChangeStateDialogDecorator_StateConditionSetupData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChangeStateDialogDecorator_StateConditionSetupData__Array__Class* get_class() {
            return il2cpp::get_class<app::ChangeStateDialogDecorator_StateConditionSetupData__Array__Class>(type_info(), "Moon.dialogGraph", "ChangeStateDialogDecorator+StateConditionSetupData[]");
        }
        inline app::ChangeStateDialogDecorator_StateConditionSetupData__Array* create() {
            return il2cpp::create_object<app::ChangeStateDialogDecorator_StateConditionSetupData__Array>(get_class());
        }
    } // namespace ChangeStateDialogDecorator_StateConditionSetupData__Array
} // namespace app::classes::types
