#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnlockFinishLoadingAction {
        namespace {
            inline app::UnlockFinishLoadingAction__Class* type_info_ref = nullptr;
        }
        inline app::UnlockFinishLoadingAction__Class** type_info = &type_info_ref;
        inline app::UnlockFinishLoadingAction__Class* get_class() {
            return il2cpp::get_class<app::UnlockFinishLoadingAction__Class>(type_info, "", "UnlockFinishLoadingAction");
        }
        inline app::UnlockFinishLoadingAction* create() {
            return il2cpp::create_object<app::UnlockFinishLoadingAction>(get_class());
        }
    } // namespace UnlockFinishLoadingAction
} // namespace app::classes::types
