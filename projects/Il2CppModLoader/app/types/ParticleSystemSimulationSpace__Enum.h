#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ParticleSystemSimulationSpace__Enum {
        namespace {
            app::ParticleSystemSimulationSpace__Enum__Class* type_info_ref = nullptr;
        }
        app::ParticleSystemSimulationSpace__Enum__Class** type_info = &type_info_ref;
        inline app::ParticleSystemSimulationSpace__Enum__Class* get_class() {
            return il2cpp::get_class<app::ParticleSystemSimulationSpace__Enum__Class>(type_info, "UnityEngine", "ParticleSystemSimulationSpace");
        }
        inline app::ParticleSystemSimulationSpace__Enum* create() {
            return il2cpp::create_object<app::ParticleSystemSimulationSpace__Enum>(get_class());
        }
    } // namespace ParticleSystemSimulationSpace__Enum
} // namespace app::classes::types
