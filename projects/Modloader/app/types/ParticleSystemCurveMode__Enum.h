#pragma once
#include <Modloader/app/structs/ParticleSystemCurveMode__Enum.h>
#include <Modloader/app/structs/ParticleSystemCurveMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParticleSystemCurveMode__Enum {
        inline app::ParticleSystemCurveMode__Enum__Class** type_info() {
            static app::ParticleSystemCurveMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ParticleSystemCurveMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ParticleSystemCurveMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::ParticleSystemCurveMode__Enum__Class>(type_info(), "UnityEngine", "ParticleSystemCurveMode");
        }
        inline app::ParticleSystemCurveMode__Enum* create() {
            return il2cpp::create_object<app::ParticleSystemCurveMode__Enum>(get_class());
        }
    } // namespace ParticleSystemCurveMode__Enum
} // namespace app::classes::types
