#pragma once
#include <Modloader/app/structs/LockPlayerInputManualAction.h>
#include <Modloader/app/structs/LockPlayerInputManualAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LockPlayerInputManualAction {
        inline app::LockPlayerInputManualAction__Class** type_info() {
            static app::LockPlayerInputManualAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LockPlayerInputManualAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LockPlayerInputManualAction__Class* get_class() {
            return il2cpp::get_class<app::LockPlayerInputManualAction__Class>(type_info(), "", "LockPlayerInputManualAction");
        }
        inline app::LockPlayerInputManualAction* create() {
            return il2cpp::create_object<app::LockPlayerInputManualAction>(get_class());
        }
    } // namespace LockPlayerInputManualAction
} // namespace app::classes::types
