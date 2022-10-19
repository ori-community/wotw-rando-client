#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LightLambda_c_DisplayClass74_0 {
        inline app::LightLambda_c_DisplayClass74_0__Class** type_info = (app::LightLambda_c_DisplayClass74_0__Class**)(modloader::win::memory::resolve_rva(0x04772D38));
        inline app::LightLambda_c_DisplayClass74_0__Class* get_class() {
            return il2cpp::get_nested_class<app::LightLambda_c_DisplayClass74_0__Class>(type_info, "System.Linq.Expressions.Interpreter", "LightLambda", "<>c__DisplayClass74_0");
        }
        inline app::LightLambda_c_DisplayClass74_0* create() {
            return il2cpp::create_object<app::LightLambda_c_DisplayClass74_0>(get_class());
        }
    } // namespace LightLambda_c_DisplayClass74_0
} // namespace app::classes::types
