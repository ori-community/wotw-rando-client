#pragma once
#include <Modloader/app/structs/GhostAnimationParameterPlugin_AnimationParameterData.h>
#include <Modloader/app/structs/GhostAnimationParameterPlugin_AnimationParameterData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GhostAnimationParameterPlugin_AnimationParameterData {
        inline app::GhostAnimationParameterPlugin_AnimationParameterData__Class** type_info() {
            static app::GhostAnimationParameterPlugin_AnimationParameterData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GhostAnimationParameterPlugin_AnimationParameterData__Class**)(modloader::win::memory::resolve_rva(0x0476A938));
            }
            return cache;
        }
        inline app::GhostAnimationParameterPlugin_AnimationParameterData__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostAnimationParameterPlugin_AnimationParameterData__Class>(type_info(), "", "GhostAnimationParameterPlugin", "AnimationParameterData");
        }
        inline app::GhostAnimationParameterPlugin_AnimationParameterData* create() {
            return il2cpp::create_object<app::GhostAnimationParameterPlugin_AnimationParameterData>(get_class());
        }
    } // namespace GhostAnimationParameterPlugin_AnimationParameterData
} // namespace app::classes::types
