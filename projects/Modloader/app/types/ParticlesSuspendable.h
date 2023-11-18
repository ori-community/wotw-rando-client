#pragma once
#include <Modloader/app/structs/ParticlesSuspendable.h>
#include <Modloader/app/structs/ParticlesSuspendable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParticlesSuspendable {
        inline app::ParticlesSuspendable__Class** type_info() {
            static app::ParticlesSuspendable__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ParticlesSuspendable__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ParticlesSuspendable__Class* get_class() {
            return il2cpp::get_class<app::ParticlesSuspendable__Class>(type_info(), "", "ParticlesSuspendable");
        }
        inline app::ParticlesSuspendable* create() {
            return il2cpp::create_object<app::ParticlesSuspendable>(get_class());
        }
    } // namespace ParticlesSuspendable
} // namespace app::classes::types
