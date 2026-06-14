#pragma once
#include <Modloader/app/structs/ChangeStateDialogDecorator.h>
#include <Modloader/app/structs/ChangeStateDialogDecorator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChangeStateDialogDecorator {
        inline app::ChangeStateDialogDecorator__Class** type_info() {
            static app::ChangeStateDialogDecorator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChangeStateDialogDecorator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChangeStateDialogDecorator__Class* get_class() {
            return il2cpp::get_class<app::ChangeStateDialogDecorator__Class>(type_info(), "Moon.dialogGraph", "ChangeStateDialogDecorator");
        }
        inline app::ChangeStateDialogDecorator* create() {
            return il2cpp::create_object<app::ChangeStateDialogDecorator>(get_class());
        }
    } // namespace ChangeStateDialogDecorator
} // namespace app::classes::types
