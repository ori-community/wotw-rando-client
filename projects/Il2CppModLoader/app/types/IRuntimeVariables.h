#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IRuntimeVariables {
        namespace {
            inline app::IRuntimeVariables__Class* type_info_ref = nullptr;
        }
        inline app::IRuntimeVariables__Class** type_info = &type_info_ref;
        inline app::IRuntimeVariables__Class* get_class() {
            return il2cpp::get_class<app::IRuntimeVariables__Class>(type_info, "System.Runtime.CompilerServices", "IRuntimeVariables");
        }
    } // namespace IRuntimeVariables
} // namespace app::classes::types
