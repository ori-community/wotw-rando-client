#pragma once
#include <Modloader/app/structs/ParticleSystemGradientMode__Enum.h>
#include <Modloader/app/structs/ParticleSystemGradientMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParticleSystemGradientMode__Enum {
        inline app::ParticleSystemGradientMode__Enum__Class** type_info() {
            static app::ParticleSystemGradientMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ParticleSystemGradientMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ParticleSystemGradientMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::ParticleSystemGradientMode__Enum__Class>(type_info(), "UnityEngine", "ParticleSystemGradientMode");
        }
        inline app::ParticleSystemGradientMode__Enum* create() {
            return il2cpp::create_object<app::ParticleSystemGradientMode__Enum>(get_class());
        }
    } // namespace ParticleSystemGradientMode__Enum
} // namespace app::classes::types
