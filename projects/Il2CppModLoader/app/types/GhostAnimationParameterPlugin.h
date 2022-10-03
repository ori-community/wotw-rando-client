#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostAnimationParameterPlugin {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GhostAnimationParameterPlugin__Class** type_info;
        inline app::GhostAnimationParameterPlugin__Class* get_class() {
            return il2cpp::get_class<app::GhostAnimationParameterPlugin__Class>(type_info, "", "GhostAnimationParameterPlugin");
        }
        inline app::GhostAnimationParameterPlugin* create() {
            return il2cpp::create_object<app::GhostAnimationParameterPlugin>(get_class());
        }
    } // namespace GhostAnimationParameterPlugin
} // namespace app::classes::types
