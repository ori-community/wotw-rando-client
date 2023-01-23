#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ParticleSystem_MinMaxGradient__Class.h>
#include <Modloader/app/structs/ParticleSystem_MinMaxGradient.h>
#include <Modloader/app/structs/ParticleSystem_MinMaxGradient__Boxed.h>

namespace app::classes::types {
    namespace ParticleSystem_MinMaxGradient {
        namespace {
            inline app::ParticleSystem_MinMaxGradient__Class* type_info_ref = nullptr;
        }
        inline app::ParticleSystem_MinMaxGradient__Class** type_info = &type_info_ref;
        inline app::ParticleSystem_MinMaxGradient__Class* get_class() {
            return il2cpp::get_nested_class<app::ParticleSystem_MinMaxGradient__Class>(type_info, "UnityEngine", "ParticleSystem", "MinMaxGradient");
        }
        inline app::ParticleSystem_MinMaxGradient* create() {
            return il2cpp::create_object<app::ParticleSystem_MinMaxGradient>(get_class());
        }
        inline app::ParticleSystem_MinMaxGradient__Boxed* box(app::ParticleSystem_MinMaxGradient value) {
            return il2cpp::box_value<app::ParticleSystem_MinMaxGradient__Boxed>(get_class(), value);
        }
    } // namespace ParticleSystem_MinMaxGradient
} // namespace app::classes::types
