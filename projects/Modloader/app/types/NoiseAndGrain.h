#pragma once
#include <Modloader/app/structs/NoiseAndGrain.h>
#include <Modloader/app/structs/NoiseAndGrain__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NoiseAndGrain {
        inline app::NoiseAndGrain__Class** type_info() {
            static app::NoiseAndGrain__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NoiseAndGrain__Class**)(modloader::win::memory::resolve_rva(0x04740118));
            }
            return cache;
        }
        inline app::NoiseAndGrain__Class* get_class() {
            return il2cpp::get_class<app::NoiseAndGrain__Class>(type_info(), "UnityStandardAssets.ImageEffects", "NoiseAndGrain");
        }
        inline app::NoiseAndGrain* create() {
            return il2cpp::create_object<app::NoiseAndGrain>(get_class());
        }
    } // namespace NoiseAndGrain
} // namespace app::classes::types
