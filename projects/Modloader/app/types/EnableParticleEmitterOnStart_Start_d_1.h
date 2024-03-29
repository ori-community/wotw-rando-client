#pragma once
#include <Modloader/app/structs/EnableParticleEmitterOnStart_Start_d_1.h>
#include <Modloader/app/structs/EnableParticleEmitterOnStart_Start_d_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnableParticleEmitterOnStart_Start_d_1 {
        inline app::EnableParticleEmitterOnStart_Start_d_1__Class** type_info() {
            static app::EnableParticleEmitterOnStart_Start_d_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EnableParticleEmitterOnStart_Start_d_1__Class**)(modloader::win::memory::resolve_rva(0x04765580));
            }
            return cache;
        }
        inline app::EnableParticleEmitterOnStart_Start_d_1__Class* get_class() {
            return il2cpp::get_nested_class<app::EnableParticleEmitterOnStart_Start_d_1__Class>(type_info(), "", "EnableParticleEmitterOnStart", "<Start>d__1");
        }
        inline app::EnableParticleEmitterOnStart_Start_d_1* create() {
            return il2cpp::create_object<app::EnableParticleEmitterOnStart_Start_d_1>(get_class());
        }
    } // namespace EnableParticleEmitterOnStart_Start_d_1
} // namespace app::classes::types
