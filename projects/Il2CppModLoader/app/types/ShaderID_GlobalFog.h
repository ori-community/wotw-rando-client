#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_GlobalFog {
        inline app::ShaderID_GlobalFog__Class** type_info = (app::ShaderID_GlobalFog__Class**)(modloader::win::memory::resolve_rva(0x04761D38));
        inline app::ShaderID_GlobalFog__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_GlobalFog__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_GlobalFog");
        }
        inline app::ShaderID_GlobalFog* create() {
            return il2cpp::create_object<app::ShaderID_GlobalFog>(get_class());
        }
    } // namespace ShaderID_GlobalFog
} // namespace app::classes::types
