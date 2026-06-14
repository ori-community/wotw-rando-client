#pragma once
#include <Modloader/app/structs/ShaderID_ScreenSpaceReflection.h>
#include <Modloader/app/structs/ShaderID_ScreenSpaceReflection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_ScreenSpaceReflection {
        inline app::ShaderID_ScreenSpaceReflection__Class** type_info() {
            static app::ShaderID_ScreenSpaceReflection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_ScreenSpaceReflection__Class**)(modloader::win::memory::resolve_rva(0x04771598));
            }
            return cache;
        }
        inline app::ShaderID_ScreenSpaceReflection__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_ScreenSpaceReflection__Class>(type_info(), "UnityStandardAssets.CinematicEffects", "ShaderID_ScreenSpaceReflection");
        }
        inline app::ShaderID_ScreenSpaceReflection* create() {
            return il2cpp::create_object<app::ShaderID_ScreenSpaceReflection>(get_class());
        }
    } // namespace ShaderID_ScreenSpaceReflection
} // namespace app::classes::types
