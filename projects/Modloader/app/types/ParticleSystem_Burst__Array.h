#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ParticleSystem_Burst__Array__Class.h>
#include <Modloader/app/structs/ParticleSystem_Burst__Array.h>

namespace app::classes::types {
    namespace ParticleSystem_Burst__Array {
        inline app::ParticleSystem_Burst__Array__Class** type_info = (app::ParticleSystem_Burst__Array__Class**)(modloader::win::memory::resolve_rva(0x0477D778));
        inline app::ParticleSystem_Burst__Array__Class* get_class() {
            return il2cpp::get_class<app::ParticleSystem_Burst__Array__Class>(type_info, "UnityEngine", "ParticleSystem+Burst[]");
        }
        inline app::ParticleSystem_Burst__Array* create() {
            return il2cpp::create_object<app::ParticleSystem_Burst__Array>(get_class());
        }
    } // namespace ParticleSystem_Burst__Array
} // namespace app::classes::types
