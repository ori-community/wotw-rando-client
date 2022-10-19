#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VariablesProvider_c_DisplayClass5_0 {
        inline app::VariablesProvider_c_DisplayClass5_0__Class** type_info = (app::VariablesProvider_c_DisplayClass5_0__Class**)(modloader::win::memory::resolve_rva(0x0473A168));
        inline app::VariablesProvider_c_DisplayClass5_0__Class* get_class() {
            return il2cpp::get_nested_class<app::VariablesProvider_c_DisplayClass5_0__Class>(type_info, "Moon.ContinuousIntegration", "VariablesProvider", "<>c__DisplayClass5_0");
        }
        inline app::VariablesProvider_c_DisplayClass5_0* create() {
            return il2cpp::create_object<app::VariablesProvider_c_DisplayClass5_0>(get_class());
        }
    } // namespace VariablesProvider_c_DisplayClass5_0
} // namespace app::classes::types
