#pragma once
#include <Modloader/app/structs/ShaderID_FXAA.h>
#include <Modloader/app/structs/ShaderID_FXAA__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_FXAA {
        inline app::ShaderID_FXAA__Class** type_info() {
            static app::ShaderID_FXAA__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_FXAA__Class**)(modloader::win::memory::resolve_rva(0x04724440));
            }
            return cache;
        }
        inline app::ShaderID_FXAA__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_FXAA__Class>(type_info(), "UnityStandardAssets.CinematicEffects", "ShaderID_FXAA");
        }
        inline app::ShaderID_FXAA* create() {
            return il2cpp::create_object<app::ShaderID_FXAA>(get_class());
        }
    } // namespace ShaderID_FXAA
} // namespace app::classes::types
