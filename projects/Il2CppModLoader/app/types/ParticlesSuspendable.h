#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ParticlesSuspendable {
        namespace {
            app::ParticlesSuspendable__Class* type_info_ref = nullptr;
        }
        app::ParticlesSuspendable__Class** type_info = &type_info_ref;
        inline app::ParticlesSuspendable__Class* get_class() {
            return il2cpp::get_class<app::ParticlesSuspendable__Class>(type_info, "", "ParticlesSuspendable");
        }
        inline app::ParticlesSuspendable* create() {
            return il2cpp::create_object<app::ParticlesSuspendable>(get_class());
        }
    } // namespace ParticlesSuspendable
} // namespace app::classes::types
