#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LockPlayerInputManualAction__Class.h>
#include <Modloader/app/structs/LockPlayerInputManualAction.h>

namespace app::classes::types {
    namespace LockPlayerInputManualAction {
        namespace {
            inline app::LockPlayerInputManualAction__Class* type_info_ref = nullptr;
        }
        inline app::LockPlayerInputManualAction__Class** type_info = &type_info_ref;
        inline app::LockPlayerInputManualAction__Class* get_class() {
            return il2cpp::get_class<app::LockPlayerInputManualAction__Class>(type_info, "", "LockPlayerInputManualAction");
        }
        inline app::LockPlayerInputManualAction* create() {
            return il2cpp::create_object<app::LockPlayerInputManualAction>(get_class());
        }
    } // namespace LockPlayerInputManualAction
} // namespace app::classes::types
