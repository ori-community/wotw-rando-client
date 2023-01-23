#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SetGameModeAction__Class.h>
#include <Modloader/app/structs/SetGameModeAction.h>

namespace app::classes::types {
    namespace SetGameModeAction {
        namespace {
            inline app::SetGameModeAction__Class* type_info_ref = nullptr;
        }
        inline app::SetGameModeAction__Class** type_info = &type_info_ref;
        inline app::SetGameModeAction__Class* get_class() {
            return il2cpp::get_class<app::SetGameModeAction__Class>(type_info, "", "SetGameModeAction");
        }
        inline app::SetGameModeAction* create() {
            return il2cpp::create_object<app::SetGameModeAction>(get_class());
        }
    } // namespace SetGameModeAction
} // namespace app::classes::types
