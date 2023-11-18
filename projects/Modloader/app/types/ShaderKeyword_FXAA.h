#pragma once
#include <Modloader/app/structs/ShaderKeyword_FXAA.h>
#include <Modloader/app/structs/ShaderKeyword_FXAA__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderKeyword_FXAA {
        inline app::ShaderKeyword_FXAA__Class** type_info() {
            static app::ShaderKeyword_FXAA__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderKeyword_FXAA__Class**)(modloader::win::memory::resolve_rva(0x04716D58));
            }
            return cache;
        }
        inline app::ShaderKeyword_FXAA__Class* get_class() {
            return il2cpp::get_class<app::ShaderKeyword_FXAA__Class>(type_info(), "UnityStandardAssets.CinematicEffects", "ShaderKeyword_FXAA");
        }
        inline app::ShaderKeyword_FXAA* create() {
            return il2cpp::create_object<app::ShaderKeyword_FXAA>(get_class());
        }
    } // namespace ShaderKeyword_FXAA
} // namespace app::classes::types
