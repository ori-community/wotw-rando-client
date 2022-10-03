#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Quads {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Quads__Class** type_info;
        inline app::Quads__Class* get_class() {
            return il2cpp::get_class<app::Quads__Class>(type_info, "UnityStandardAssets.ImageEffects", "Quads");
        }
        inline app::Quads* create() {
            return il2cpp::create_object<app::Quads>(get_class());
        }
    } // namespace Quads
} // namespace app::classes::types
