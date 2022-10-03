#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VariablesProvider {
        namespace {
            app::VariablesProvider__Class* type_info_ref = nullptr;
        }
        app::VariablesProvider__Class** type_info = &type_info_ref;
        inline app::VariablesProvider__Class* get_class() {
            return il2cpp::get_class<app::VariablesProvider__Class>(type_info, "Moon.ContinuousIntegration", "VariablesProvider");
        }
        inline app::VariablesProvider* create() {
            return il2cpp::create_object<app::VariablesProvider>(get_class());
        }
    } // namespace VariablesProvider
} // namespace app::classes::types
