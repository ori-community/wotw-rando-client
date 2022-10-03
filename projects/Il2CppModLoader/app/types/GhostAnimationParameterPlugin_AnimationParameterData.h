#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostAnimationParameterPlugin_AnimationParameterData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GhostAnimationParameterPlugin_AnimationParameterData__Class** type_info;
        inline app::GhostAnimationParameterPlugin_AnimationParameterData__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostAnimationParameterPlugin_AnimationParameterData__Class>(type_info, "", "GhostAnimationParameterPlugin", "AnimationParameterData");
        }
        inline app::GhostAnimationParameterPlugin_AnimationParameterData* create() {
            return il2cpp::create_object<app::GhostAnimationParameterPlugin_AnimationParameterData>(get_class());
        }
    } // namespace GhostAnimationParameterPlugin_AnimationParameterData
} // namespace app::classes::types
