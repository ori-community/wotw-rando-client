#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WaitForActionToFinishAction__Class.h>
#include <Modloader/app/structs/WaitForActionToFinishAction.h>

namespace app::classes::types {
    namespace WaitForActionToFinishAction {
        namespace {
            inline app::WaitForActionToFinishAction__Class* type_info_ref = nullptr;
        }
        inline app::WaitForActionToFinishAction__Class** type_info = &type_info_ref;
        inline app::WaitForActionToFinishAction__Class* get_class() {
            return il2cpp::get_class<app::WaitForActionToFinishAction__Class>(type_info, "", "WaitForActionToFinishAction");
        }
        inline app::WaitForActionToFinishAction* create() {
            return il2cpp::create_object<app::WaitForActionToFinishAction>(get_class());
        }
    } // namespace WaitForActionToFinishAction
} // namespace app::classes::types
