#pragma once
#include <Modloader/app/structs/LightLambda_c_DisplayClass74_0.h>
#include <Modloader/app/structs/LightLambda_c_DisplayClass74_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightLambda_c_DisplayClass74_0 {
        inline app::LightLambda_c_DisplayClass74_0__Class** type_info() {
            static app::LightLambda_c_DisplayClass74_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LightLambda_c_DisplayClass74_0__Class**)(modloader::win::memory::resolve_rva(0x04772D38));
            }
            return cache;
        }
        inline app::LightLambda_c_DisplayClass74_0__Class* get_class() {
            return il2cpp::get_nested_class<app::LightLambda_c_DisplayClass74_0__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LightLambda", "<>c__DisplayClass74_0");
        }
        inline app::LightLambda_c_DisplayClass74_0* create() {
            return il2cpp::create_object<app::LightLambda_c_DisplayClass74_0>(get_class());
        }
    } // namespace LightLambda_c_DisplayClass74_0
} // namespace app::classes::types
