#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StartExitingAction__Class.h>
#include <Modloader/app/structs/StartExitingAction.h>

namespace app::classes::types {
    namespace StartExitingAction {
        namespace {
            inline app::StartExitingAction__Class* type_info_ref = nullptr;
        }
        inline app::StartExitingAction__Class** type_info = &type_info_ref;
        inline app::StartExitingAction__Class* get_class() {
            return il2cpp::get_class<app::StartExitingAction__Class>(type_info, "", "StartExitingAction");
        }
        inline app::StartExitingAction* create() {
            return il2cpp::create_object<app::StartExitingAction>(get_class());
        }
    } // namespace StartExitingAction
} // namespace app::classes::types
