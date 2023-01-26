#pragma once
#include <Modloader/app/structs/UnlockFinishLoadingAction.h>
#include <Modloader/app/structs/UnlockFinishLoadingAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnlockFinishLoadingAction {
        inline app::UnlockFinishLoadingAction__Class** type_info() {
            static app::UnlockFinishLoadingAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnlockFinishLoadingAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnlockFinishLoadingAction__Class* get_class() {
            return il2cpp::get_class<app::UnlockFinishLoadingAction__Class>(type_info(), "", "UnlockFinishLoadingAction");
        }
        inline app::UnlockFinishLoadingAction* create() {
            return il2cpp::create_object<app::UnlockFinishLoadingAction>(get_class());
        }
    } // namespace UnlockFinishLoadingAction
} // namespace app::classes::types
