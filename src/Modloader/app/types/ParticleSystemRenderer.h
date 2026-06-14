#pragma once
#include <Modloader/app/structs/ParticleSystemRenderer.h>
#include <Modloader/app/structs/ParticleSystemRenderer__Array.h>
#include <Modloader/app/structs/ParticleSystemRenderer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParticleSystemRenderer {
        inline app::ParticleSystemRenderer__Class** type_info() {
            static app::ParticleSystemRenderer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ParticleSystemRenderer__Class**)(modloader::win::memory::resolve_rva(0x04794718));
            }
            return cache;
        }
        inline app::ParticleSystemRenderer__Class* get_class() {
            return il2cpp::get_class<app::ParticleSystemRenderer__Class>(type_info(), "UnityEngine", "ParticleSystemRenderer");
        }
        inline app::ParticleSystemRenderer* create() {
            return il2cpp::create_object<app::ParticleSystemRenderer>(get_class());
        }
        inline app::ParticleSystemRenderer__Array* create_array(int size) {
            return il2cpp::array_new<app::ParticleSystemRenderer__Array>(get_class(), size);
        }
        inline app::ParticleSystemRenderer__Array* create_array(const std::vector<app::ParticleSystemRenderer*>& items) {
            return il2cpp::array_new<app::ParticleSystemRenderer__Array>(get_class(), items);
        }
    } // namespace ParticleSystemRenderer
} // namespace app::classes::types
