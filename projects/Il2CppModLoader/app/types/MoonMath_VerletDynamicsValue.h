#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonMath_VerletDynamicsValue {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonMath_VerletDynamicsValue__Class** type_info;
        inline app::MoonMath_VerletDynamicsValue__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonMath_VerletDynamicsValue__Class>(type_info, "", "MoonMath", "VerletDynamicsValue");
        }
        inline app::MoonMath_VerletDynamicsValue* create() {
            return il2cpp::create_object<app::MoonMath_VerletDynamicsValue>(get_class());
        }
    } // namespace MoonMath_VerletDynamicsValue
} // namespace app::classes::types
