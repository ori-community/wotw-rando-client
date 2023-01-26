#pragma once
#include <Modloader/app/structs/ParticleSystemStopBehavior__Enum.h>
#include <Modloader/app/structs/ParticleSystemStopBehavior__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParticleSystemStopBehavior__Enum {
        inline app::ParticleSystemStopBehavior__Enum__Class** type_info() {
            static app::ParticleSystemStopBehavior__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ParticleSystemStopBehavior__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ParticleSystemStopBehavior__Enum__Class* get_class() {
            return il2cpp::get_class<app::ParticleSystemStopBehavior__Enum__Class>(type_info(), "UnityEngine", "ParticleSystemStopBehavior");
        }
        inline app::ParticleSystemStopBehavior__Enum* create() {
            return il2cpp::create_object<app::ParticleSystemStopBehavior__Enum>(get_class());
        }
    } // namespace ParticleSystemStopBehavior__Enum
} // namespace app::classes::types
