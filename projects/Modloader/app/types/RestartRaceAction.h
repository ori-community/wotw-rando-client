#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RestartRaceAction__Class.h>
#include <Modloader/app/structs/RestartRaceAction.h>

namespace app::classes::types {
    namespace RestartRaceAction {
        namespace {
            inline app::RestartRaceAction__Class* type_info_ref = nullptr;
        }
        inline app::RestartRaceAction__Class** type_info = &type_info_ref;
        inline app::RestartRaceAction__Class* get_class() {
            return il2cpp::get_class<app::RestartRaceAction__Class>(type_info, "", "RestartRaceAction");
        }
        inline app::RestartRaceAction* create() {
            return il2cpp::create_object<app::RestartRaceAction>(get_class());
        }
    } // namespace RestartRaceAction
} // namespace app::classes::types
