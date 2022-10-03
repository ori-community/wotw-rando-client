#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnableParticleEmitterOnStart {
        namespace {
            app::EnableParticleEmitterOnStart__Class* type_info_ref = nullptr;
        }
        app::EnableParticleEmitterOnStart__Class** type_info = &type_info_ref;
        inline app::EnableParticleEmitterOnStart__Class* get_class() {
            return il2cpp::get_class<app::EnableParticleEmitterOnStart__Class>(type_info, "", "EnableParticleEmitterOnStart");
        }
        inline app::EnableParticleEmitterOnStart* create() {
            return il2cpp::create_object<app::EnableParticleEmitterOnStart>(get_class());
        }
    } // namespace EnableParticleEmitterOnStart
} // namespace app::classes::types
