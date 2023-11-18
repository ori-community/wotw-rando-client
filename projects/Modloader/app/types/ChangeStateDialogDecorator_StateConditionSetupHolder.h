#pragma once
#include <Modloader/app/structs/ChangeStateDialogDecorator_StateConditionSetupHolder.h>
#include <Modloader/app/structs/ChangeStateDialogDecorator_StateConditionSetupHolder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChangeStateDialogDecorator_StateConditionSetupHolder {
        inline app::ChangeStateDialogDecorator_StateConditionSetupHolder__Class** type_info() {
            static app::ChangeStateDialogDecorator_StateConditionSetupHolder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChangeStateDialogDecorator_StateConditionSetupHolder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChangeStateDialogDecorator_StateConditionSetupHolder__Class* get_class() {
            return il2cpp::get_nested_class<app::ChangeStateDialogDecorator_StateConditionSetupHolder__Class>(type_info(), "Moon.dialogGraph", "ChangeStateDialogDecorator", "StateConditionSetupHolder");
        }
        inline app::ChangeStateDialogDecorator_StateConditionSetupHolder* create() {
            return il2cpp::create_object<app::ChangeStateDialogDecorator_StateConditionSetupHolder>(get_class());
        }
    } // namespace ChangeStateDialogDecorator_StateConditionSetupHolder
} // namespace app::classes::types
