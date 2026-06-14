#pragma once
#include <Modloader/app/structs/EnableParticleEmitterOnStart.h>
#include <Modloader/app/structs/EnableParticleEmitterOnStart__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnableParticleEmitterOnStart {
        inline app::EnableParticleEmitterOnStart__Class** type_info() {
            static app::EnableParticleEmitterOnStart__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnableParticleEmitterOnStart__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnableParticleEmitterOnStart__Class* get_class() {
            return il2cpp::get_class<app::EnableParticleEmitterOnStart__Class>(type_info(), "", "EnableParticleEmitterOnStart");
        }
        inline app::EnableParticleEmitterOnStart* create() {
            return il2cpp::create_object<app::EnableParticleEmitterOnStart>(get_class());
        }
    } // namespace EnableParticleEmitterOnStart
} // namespace app::classes::types
