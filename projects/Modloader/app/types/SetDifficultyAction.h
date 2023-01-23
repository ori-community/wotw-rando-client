#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SetDifficultyAction__Class.h>
#include <Modloader/app/structs/SetDifficultyAction.h>

namespace app::classes::types {
    namespace SetDifficultyAction {
        namespace {
            inline app::SetDifficultyAction__Class* type_info_ref = nullptr;
        }
        inline app::SetDifficultyAction__Class** type_info = &type_info_ref;
        inline app::SetDifficultyAction__Class* get_class() {
            return il2cpp::get_class<app::SetDifficultyAction__Class>(type_info, "", "SetDifficultyAction");
        }
        inline app::SetDifficultyAction* create() {
            return il2cpp::create_object<app::SetDifficultyAction>(get_class());
        }
    } // namespace SetDifficultyAction
} // namespace app::classes::types
