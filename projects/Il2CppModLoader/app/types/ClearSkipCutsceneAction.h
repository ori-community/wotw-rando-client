#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ClearSkipCutsceneAction {
        namespace {
            inline app::ClearSkipCutsceneAction__Class* type_info_ref = nullptr;
        }
        inline app::ClearSkipCutsceneAction__Class** type_info = &type_info_ref;
        inline app::ClearSkipCutsceneAction__Class* get_class() {
            return il2cpp::get_class<app::ClearSkipCutsceneAction__Class>(type_info, "", "ClearSkipCutsceneAction");
        }
        inline app::ClearSkipCutsceneAction* create() {
            return il2cpp::create_object<app::ClearSkipCutsceneAction>(get_class());
        }
    } // namespace ClearSkipCutsceneAction
} // namespace app::classes::types
