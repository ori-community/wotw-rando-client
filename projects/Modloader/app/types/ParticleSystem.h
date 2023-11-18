#pragma once
#include <Modloader/app/structs/ParticleSystem.h>
#include <Modloader/app/structs/ParticleSystem__Array.h>
#include <Modloader/app/structs/ParticleSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParticleSystem {
        inline app::ParticleSystem__Class** type_info() {
            static app::ParticleSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ParticleSystem__Class**)(modloader::win::memory::resolve_rva(0x0478E630));
            }
            return cache;
        }
        inline app::ParticleSystem__Class* get_class() {
            return il2cpp::get_class<app::ParticleSystem__Class>(type_info(), "UnityEngine", "ParticleSystem");
        }
        inline app::ParticleSystem* create() {
            return il2cpp::create_object<app::ParticleSystem>(get_class());
        }
        inline app::ParticleSystem__Array* create_array(int size) {
            return il2cpp::array_new<app::ParticleSystem__Array>(get_class(), size);
        }
        inline app::ParticleSystem__Array* create_array(const std::vector<app::ParticleSystem*>& items) {
            return il2cpp::array_new<app::ParticleSystem__Array>(get_class(), items);
        }
    } // namespace ParticleSystem
} // namespace app::classes::types
