#pragma once
#include <Modloader/app/structs/ShaderID_NoiseAndGrain.h>
#include <Modloader/app/structs/ShaderID_NoiseAndGrain__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShaderID_NoiseAndGrain {
        inline app::ShaderID_NoiseAndGrain__Class** type_info() {
            static app::ShaderID_NoiseAndGrain__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShaderID_NoiseAndGrain__Class**)(modloader::win::memory::resolve_rva(0x04726BF0));
            }
            return cache;
        }
        inline app::ShaderID_NoiseAndGrain__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_NoiseAndGrain__Class>(type_info(), "UnityStandardAssets.ImageEffects", "ShaderID_NoiseAndGrain");
        }
        inline app::ShaderID_NoiseAndGrain* create() {
            return il2cpp::create_object<app::ShaderID_NoiseAndGrain>(get_class());
        }
    } // namespace ShaderID_NoiseAndGrain
} // namespace app::classes::types
