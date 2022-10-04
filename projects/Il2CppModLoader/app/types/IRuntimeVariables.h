#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IRuntimeVariables {
        namespace {
            app::IRuntimeVariables__Class* type_info_ref = nullptr;
        }
        app::IRuntimeVariables__Class** type_info = &type_info_ref;
        inline app::IRuntimeVariables__Class* get_class() {
            return il2cpp::get_class<app::IRuntimeVariables__Class>(type_info, "System.Runtime.CompilerServices", "IRuntimeVariables");
        }
        inline app::IRuntimeVariables* create() {
            return il2cpp::create_object<app::IRuntimeVariables>(get_class());
        }
    } // namespace IRuntimeVariables
} // namespace app::classes::types
