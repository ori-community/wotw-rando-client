#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RegisterSkipCutsceneAction__Class.h>
#include <Modloader/app/structs/RegisterSkipCutsceneAction.h>

namespace app::classes::types {
    namespace RegisterSkipCutsceneAction {
        namespace {
            inline app::RegisterSkipCutsceneAction__Class* type_info_ref = nullptr;
        }
        inline app::RegisterSkipCutsceneAction__Class** type_info = &type_info_ref;
        inline app::RegisterSkipCutsceneAction__Class* get_class() {
            return il2cpp::get_class<app::RegisterSkipCutsceneAction__Class>(type_info, "", "RegisterSkipCutsceneAction");
        }
        inline app::RegisterSkipCutsceneAction* create() {
            return il2cpp::create_object<app::RegisterSkipCutsceneAction>(get_class());
        }
    } // namespace RegisterSkipCutsceneAction
} // namespace app::classes::types
