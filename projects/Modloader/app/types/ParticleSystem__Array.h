#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ParticleSystem__Array__Class.h>
#include <Modloader/app/structs/ParticleSystem__Array.h>

namespace app::classes::types {
    namespace ParticleSystem__Array {
        inline app::ParticleSystem__Array__Class** type_info = (app::ParticleSystem__Array__Class**)(modloader::win::memory::resolve_rva(0x04752998));
        inline app::ParticleSystem__Array__Class* get_class() {
            return il2cpp::get_class<app::ParticleSystem__Array__Class>(type_info, "UnityEngine", "ParticleSystem[]");
        }
        inline app::ParticleSystem__Array* create() {
            return il2cpp::create_object<app::ParticleSystem__Array>(get_class());
        }
    } // namespace ParticleSystem__Array
} // namespace app::classes::types
