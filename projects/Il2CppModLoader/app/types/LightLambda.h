#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightLambda {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LightLambda__Class** type_info;
        inline app::LightLambda__Class* get_class() {
            return il2cpp::get_class<app::LightLambda__Class>(type_info, "System.Linq.Expressions.Interpreter", "LightLambda");
        }
        inline app::LightLambda* create() {
            return il2cpp::create_object<app::LightLambda>(get_class());
        }
    } // namespace LightLambda
} // namespace app::classes::types
