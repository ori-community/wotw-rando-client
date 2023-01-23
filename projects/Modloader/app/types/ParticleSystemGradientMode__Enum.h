#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ParticleSystemGradientMode__Enum__Class.h>
#include <Modloader/app/structs/ParticleSystemGradientMode__Enum.h>

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
