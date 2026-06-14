#pragma once
#include <Modloader/app/structs/IRuntimeVariables.h>
#include <Modloader/app/structs/IRuntimeVariables__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IRuntimeVariables {
        inline app::IRuntimeVariables__Class** type_info() {
            static app::IRuntimeVariables__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IRuntimeVariables__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IRuntimeVariables__Class* get_class() {
            return il2cpp::get_class<app::IRuntimeVariables__Class>(type_info(), "System.Runtime.CompilerServices", "IRuntimeVariables");
        }
    } // namespace IRuntimeVariables
} // namespace app::classes::types
