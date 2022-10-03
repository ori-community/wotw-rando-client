#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActionExecutionError {
        namespace {
            app::ActionExecutionError__Class* type_info_ref = nullptr;
        }
        app::ActionExecutionError__Class** type_info = &type_info_ref;
        inline app::ActionExecutionError__Class* get_class() {
            return il2cpp::get_class<app::ActionExecutionError__Class>(type_info, "PlayFab.PlayStreamModels", "ActionExecutionError");
        }
        inline app::ActionExecutionError* create() {
            return il2cpp::create_object<app::ActionExecutionError>(get_class());
        }
    } // namespace ActionExecutionError
} // namespace app::classes::types
