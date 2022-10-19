#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GoToTrialEndAction {
        namespace {
            inline app::GoToTrialEndAction__Class* type_info_ref = nullptr;
        }
        inline app::GoToTrialEndAction__Class** type_info = &type_info_ref;
        inline app::GoToTrialEndAction__Class* get_class() {
            return il2cpp::get_class<app::GoToTrialEndAction__Class>(type_info, "", "GoToTrialEndAction");
        }
        inline app::GoToTrialEndAction* create() {
            return il2cpp::create_object<app::GoToTrialEndAction>(get_class());
        }
    } // namespace GoToTrialEndAction
} // namespace app::classes::types
