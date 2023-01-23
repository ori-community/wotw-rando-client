#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CancelDifficultyScreenAction__Class.h>
#include <Modloader/app/structs/CancelDifficultyScreenAction.h>

namespace app::classes::types {
    namespace CancelDifficultyScreenAction {
        namespace {
            inline app::CancelDifficultyScreenAction__Class* type_info_ref = nullptr;
        }
        inline app::CancelDifficultyScreenAction__Class** type_info = &type_info_ref;
        inline app::CancelDifficultyScreenAction__Class* get_class() {
            return il2cpp::get_class<app::CancelDifficultyScreenAction__Class>(type_info, "", "CancelDifficultyScreenAction");
        }
        inline app::CancelDifficultyScreenAction* create() {
            return il2cpp::create_object<app::CancelDifficultyScreenAction>(get_class());
        }
    } // namespace CancelDifficultyScreenAction
} // namespace app::classes::types
