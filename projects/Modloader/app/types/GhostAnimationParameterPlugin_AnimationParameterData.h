#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GhostAnimationParameterPlugin_AnimationParameterData {
        inline app::GhostAnimationParameterPlugin_AnimationParameterData__Class** type_info = (app::GhostAnimationParameterPlugin_AnimationParameterData__Class**)(modloader::win::memory::resolve_rva(0x0476A938));
        inline app::GhostAnimationParameterPlugin_AnimationParameterData__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostAnimationParameterPlugin_AnimationParameterData__Class>(type_info, "", "GhostAnimationParameterPlugin", "AnimationParameterData");
        }
        inline app::GhostAnimationParameterPlugin_AnimationParameterData* create() {
            return il2cpp::create_object<app::GhostAnimationParameterPlugin_AnimationParameterData>(get_class());
        }
    } // namespace GhostAnimationParameterPlugin_AnimationParameterData
} // namespace app::classes::types
