#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LowerDifficultyAction__Class.h>
#include <Modloader/app/structs/LowerDifficultyAction.h>

namespace app::classes::types {
    namespace LowerDifficultyAction {
        namespace {
            inline app::LowerDifficultyAction__Class* type_info_ref = nullptr;
        }
        inline app::LowerDifficultyAction__Class** type_info = &type_info_ref;
        inline app::LowerDifficultyAction__Class* get_class() {
            return il2cpp::get_class<app::LowerDifficultyAction__Class>(type_info, "", "LowerDifficultyAction");
        }
        inline app::LowerDifficultyAction* create() {
            return il2cpp::create_object<app::LowerDifficultyAction>(get_class());
        }
    } // namespace LowerDifficultyAction
} // namespace app::classes::types
