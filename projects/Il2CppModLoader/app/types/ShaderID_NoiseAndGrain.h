#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShaderID_NoiseAndGrain {
        inline app::ShaderID_NoiseAndGrain__Class** type_info = (app::ShaderID_NoiseAndGrain__Class**)(modloader::win::memory::resolve_rva(0x04726BF0));
        inline app::ShaderID_NoiseAndGrain__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_NoiseAndGrain__Class>(type_info, "UnityStandardAssets.ImageEffects", "ShaderID_NoiseAndGrain");
        }
        inline app::ShaderID_NoiseAndGrain* create() {
            return il2cpp::create_object<app::ShaderID_NoiseAndGrain>(get_class());
        }
    } // namespace ShaderID_NoiseAndGrain
} // namespace app::classes::types
