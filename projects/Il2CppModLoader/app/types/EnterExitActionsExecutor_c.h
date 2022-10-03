#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnterExitActionsExecutor_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EnterExitActionsExecutor_c__Class** type_info;
        inline app::EnterExitActionsExecutor_c__Class* get_class() {
            return il2cpp::get_nested_class<app::EnterExitActionsExecutor_c__Class>(type_info, "", "EnterExitActionsExecutor", "<>c");
        }
        inline app::EnterExitActionsExecutor_c* create() {
            return il2cpp::create_object<app::EnterExitActionsExecutor_c>(get_class());
        }
    } // namespace EnterExitActionsExecutor_c
} // namespace app::classes::types
