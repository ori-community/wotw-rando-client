#pragma once
#include <Modloader/app/structs/EnterExitActionsExecutor.h>
#include <Modloader/app/structs/EnterExitActionsExecutor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnterExitActionsExecutor {
        inline app::EnterExitActionsExecutor__Class** type_info() {
            static app::EnterExitActionsExecutor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnterExitActionsExecutor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnterExitActionsExecutor__Class* get_class() {
            return il2cpp::get_class<app::EnterExitActionsExecutor__Class>(type_info(), "", "EnterExitActionsExecutor");
        }
        inline app::EnterExitActionsExecutor* create() {
            return il2cpp::create_object<app::EnterExitActionsExecutor>(get_class());
        }
    } // namespace EnterExitActionsExecutor
} // namespace app::classes::types
