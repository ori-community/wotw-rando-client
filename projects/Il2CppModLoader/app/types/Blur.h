#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Blur {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Blur__Class** type_info;
        inline app::Blur__Class* get_class() {
            return il2cpp::get_class<app::Blur__Class>(type_info, "UnityStandardAssets.ImageEffects", "Blur");
        }
        inline app::Blur* create() {
            return il2cpp::create_object<app::Blur>(get_class());
        }
    } // namespace Blur
} // namespace app::classes::types
