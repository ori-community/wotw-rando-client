#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DepthOfFieldDeprecated {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DepthOfFieldDeprecated__Class** type_info;
        inline app::DepthOfFieldDeprecated__Class* get_class() {
            return il2cpp::get_class<app::DepthOfFieldDeprecated__Class>(type_info, "UnityStandardAssets.ImageEffects", "DepthOfFieldDeprecated");
        }
        inline app::DepthOfFieldDeprecated* create() {
            return il2cpp::create_object<app::DepthOfFieldDeprecated>(get_class());
        }
    } // namespace DepthOfFieldDeprecated
} // namespace app::classes::types
