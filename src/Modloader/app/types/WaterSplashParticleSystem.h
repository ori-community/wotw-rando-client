#pragma once
#include <Modloader/app/structs/WaterSplashParticleSystem.h>
#include <Modloader/app/structs/WaterSplashParticleSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterSplashParticleSystem {
        inline app::WaterSplashParticleSystem__Class** type_info() {
            static app::WaterSplashParticleSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaterSplashParticleSystem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaterSplashParticleSystem__Class* get_class() {
            return il2cpp::get_class<app::WaterSplashParticleSystem__Class>(type_info(), "", "WaterSplashParticleSystem");
        }
        inline app::WaterSplashParticleSystem* create() {
            return il2cpp::create_object<app::WaterSplashParticleSystem>(get_class());
        }
    } // namespace WaterSplashParticleSystem
} // namespace app::classes::types
