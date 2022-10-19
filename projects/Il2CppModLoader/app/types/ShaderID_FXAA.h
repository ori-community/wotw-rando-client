#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_FXAA {
        inline app::ShaderID_FXAA__Class** type_info = (app::ShaderID_FXAA__Class**)(modloader::win::memory::resolve_rva(0x04724440));
        inline app::ShaderID_FXAA__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_FXAA__Class>(type_info, "UnityStandardAssets.CinematicEffects", "ShaderID_FXAA");
        }
        inline app::ShaderID_FXAA* create() {
            return il2cpp::create_object<app::ShaderID_FXAA>(get_class());
        }
    } // namespace ShaderID_FXAA
} // namespace app::classes::types
