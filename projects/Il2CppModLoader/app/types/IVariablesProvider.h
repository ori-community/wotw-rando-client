#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVariablesProvider {
        namespace {
            app::IVariablesProvider__Class* type_info_ref = nullptr;
        }
        app::IVariablesProvider__Class** type_info = &type_info_ref;
        inline app::IVariablesProvider__Class* get_class() {
            return il2cpp::get_class<app::IVariablesProvider__Class>(type_info, "Moon.ContinuousIntegration", "IVariablesProvider");
        }
        inline app::IVariablesProvider* create() {
            return il2cpp::create_object<app::IVariablesProvider>(get_class());
        }
    } // namespace IVariablesProvider
} // namespace app::classes::types
