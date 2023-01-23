#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PauseGameAction__Class.h>
#include <Modloader/app/structs/PauseGameAction.h>

namespace app::classes::types {
    namespace PauseGameAction {
        namespace {
            inline app::PauseGameAction__Class* type_info_ref = nullptr;
        }
        inline app::PauseGameAction__Class** type_info = &type_info_ref;
        inline app::PauseGameAction__Class* get_class() {
            return il2cpp::get_class<app::PauseGameAction__Class>(type_info, "", "PauseGameAction");
        }
        inline app::PauseGameAction* create() {
            return il2cpp::create_object<app::PauseGameAction>(get_class());
        }
    } // namespace PauseGameAction
} // namespace app::classes::types
