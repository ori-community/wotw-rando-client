#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VariablesProvider_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VariablesProvider_c__Class** type_info;
        inline app::VariablesProvider_c__Class* get_class() {
            return il2cpp::get_nested_class<app::VariablesProvider_c__Class>(type_info, "Moon.ContinuousIntegration", "VariablesProvider", "<>c");
        }
        inline app::VariablesProvider_c* create() {
            return il2cpp::create_object<app::VariablesProvider_c>(get_class());
        }
    } // namespace VariablesProvider_c
} // namespace app::classes::types
