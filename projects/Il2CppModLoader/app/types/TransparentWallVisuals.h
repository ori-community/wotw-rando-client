#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TransparentWallVisuals {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TransparentWallVisuals__Class** type_info;
        inline app::TransparentWallVisuals__Class* get_class() {
            return il2cpp::get_class<app::TransparentWallVisuals__Class>(type_info, "", "TransparentWallVisuals");
        }
        inline app::TransparentWallVisuals* create() {
            return il2cpp::create_object<app::TransparentWallVisuals>(get_class());
        }
    } // namespace TransparentWallVisuals
} // namespace app::classes::types
