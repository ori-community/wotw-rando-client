#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EnterExitActionsExecutor__Class.h>
#include <Modloader/app/structs/EnterExitActionsExecutor.h>

namespace app::classes::types {
    namespace EnterExitActionsExecutor {
        namespace {
            inline app::EnterExitActionsExecutor__Class* type_info_ref = nullptr;
        }
        inline app::EnterExitActionsExecutor__Class** type_info = &type_info_ref;
        inline app::EnterExitActionsExecutor__Class* get_class() {
            return il2cpp::get_class<app::EnterExitActionsExecutor__Class>(type_info, "", "EnterExitActionsExecutor");
        }
        inline app::EnterExitActionsExecutor* create() {
            return il2cpp::create_object<app::EnterExitActionsExecutor>(get_class());
        }
    } // namespace EnterExitActionsExecutor
} // namespace app::classes::types
