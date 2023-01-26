#pragma once
#include <Modloader/app/structs/ParticleSystem_MinMaxGradient.h>
#include <Modloader/app/structs/ParticleSystem_MinMaxGradient__Boxed.h>
#include <Modloader/app/structs/ParticleSystem_MinMaxGradient__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParticleSystem_MinMaxGradient {
        inline app::ParticleSystem_MinMaxGradient__Class** type_info() {
            static app::ParticleSystem_MinMaxGradient__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ParticleSystem_MinMaxGradient__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ParticleSystem_MinMaxGradient__Class* get_class() {
            return il2cpp::get_nested_class<app::ParticleSystem_MinMaxGradient__Class>(type_info(), "UnityEngine", "ParticleSystem", "MinMaxGradient");
        }
        inline app::ParticleSystem_MinMaxGradient* create() {
            return il2cpp::create_object<app::ParticleSystem_MinMaxGradient>(get_class());
        }
        inline app::ParticleSystem_MinMaxGradient__Boxed* box(app::ParticleSystem_MinMaxGradient value) {
            return il2cpp::box_value<app::ParticleSystem_MinMaxGradient__Boxed>(get_class(), value);
        }
    } // namespace ParticleSystem_MinMaxGradient
} // namespace app::classes::types
