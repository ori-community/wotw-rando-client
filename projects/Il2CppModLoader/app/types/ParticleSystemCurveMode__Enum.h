#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ParticleSystemCurveMode__Enum {
        namespace {
            app::ParticleSystemCurveMode__Enum__Class* type_info_ref = nullptr;
        }
        app::ParticleSystemCurveMode__Enum__Class** type_info = &type_info_ref;
        inline app::ParticleSystemCurveMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::ParticleSystemCurveMode__Enum__Class>(type_info, "UnityEngine", "ParticleSystemCurveMode");
        }
        inline app::ParticleSystemCurveMode__Enum* create() {
            return il2cpp::create_object<app::ParticleSystemCurveMode__Enum>(get_class());
        }
    } // namespace ParticleSystemCurveMode__Enum
} // namespace app::classes::types
