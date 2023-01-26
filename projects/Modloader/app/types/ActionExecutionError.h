#pragma once
#include <Modloader/app/structs/ActionExecutionError.h>
#include <Modloader/app/structs/ActionExecutionError__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActionExecutionError {
        inline app::ActionExecutionError__Class** type_info() {
            static app::ActionExecutionError__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ActionExecutionError__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ActionExecutionError__Class* get_class() {
            return il2cpp::get_class<app::ActionExecutionError__Class>(type_info(), "PlayFab.PlayStreamModels", "ActionExecutionError");
        }
        inline app::ActionExecutionError* create() {
            return il2cpp::create_object<app::ActionExecutionError>(get_class());
        }
    } // namespace ActionExecutionError
} // namespace app::classes::types
