#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_SSAOEffect {
        inline app::ShaderID_SSAOEffect__Class** type_info = (app::ShaderID_SSAOEffect__Class**)(modloader::win::memory::resolve_rva(0x04736470));
        inline app::ShaderID_SSAOEffect__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_SSAOEffect__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_SSAOEffect");
        }
        inline app::ShaderID_SSAOEffect* create() {
            return il2cpp::create_object<app::ShaderID_SSAOEffect>(get_class());
        }
    } // namespace ShaderID_SSAOEffect
} // namespace app::classes::types
