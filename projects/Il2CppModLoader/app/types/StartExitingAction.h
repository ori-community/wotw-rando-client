#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StartExitingAction {
        namespace {
            app::StartExitingAction__Class* type_info_ref = nullptr;
        }
        app::StartExitingAction__Class** type_info = &type_info_ref;
        inline app::StartExitingAction__Class* get_class() {
            return il2cpp::get_class<app::StartExitingAction__Class>(type_info, "", "StartExitingAction");
        }
        inline app::StartExitingAction* create() {
            return il2cpp::create_object<app::StartExitingAction>(get_class());
        }
    } // namespace StartExitingAction
} // namespace app::classes::types
