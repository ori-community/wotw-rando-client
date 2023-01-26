#pragma once
#include <Modloader/app/structs/CancelLoadBackupSlotAction.h>
#include <Modloader/app/structs/CancelLoadBackupSlotAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CancelLoadBackupSlotAction {
        inline app::CancelLoadBackupSlotAction__Class** type_info() {
            static app::CancelLoadBackupSlotAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CancelLoadBackupSlotAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CancelLoadBackupSlotAction__Class* get_class() {
            return il2cpp::get_class<app::CancelLoadBackupSlotAction__Class>(type_info(), "", "CancelLoadBackupSlotAction");
        }
        inline app::CancelLoadBackupSlotAction* create() {
            return il2cpp::create_object<app::CancelLoadBackupSlotAction>(get_class());
        }
    } // namespace CancelLoadBackupSlotAction
} // namespace app::classes::types
