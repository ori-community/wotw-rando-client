#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IAntiAliasing {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IAntiAliasing__Class** type_info;
        inline app::IAntiAliasing__Class* get_class() {
            return il2cpp::get_class<app::IAntiAliasing__Class>(type_info, "UnityStandardAssets.CinematicEffects", "IAntiAliasing");
        }
        inline app::IAntiAliasing* create() {
            return il2cpp::create_object<app::IAntiAliasing>(get_class());
        }
    } // namespace IAntiAliasing
} // namespace app::classes::types
