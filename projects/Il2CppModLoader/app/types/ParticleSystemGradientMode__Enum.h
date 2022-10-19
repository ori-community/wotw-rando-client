#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ParticleSystemGradientMode__Enum {
        namespace {
            inline app::ParticleSystemGradientMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ParticleSystemGradientMode__Enum__Class** type_info = &type_info_ref;
        inline app::ParticleSystemGradientMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::ParticleSystemGradientMode__Enum__Class>(type_info, "UnityEngine", "ParticleSystemGradientMode");
        }
        inline app::ParticleSystemGradientMode__Enum* create() {
            return il2cpp::create_object<app::ParticleSystemGradientMode__Enum>(get_class());
        }
    } // namespace ParticleSystemGradientMode__Enum
} // namespace app::classes::types
