#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ParticleSystemStopBehavior__Enum {
        namespace {
            inline app::ParticleSystemStopBehavior__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ParticleSystemStopBehavior__Enum__Class** type_info = &type_info_ref;
        inline app::ParticleSystemStopBehavior__Enum__Class* get_class() {
            return il2cpp::get_class<app::ParticleSystemStopBehavior__Enum__Class>(type_info, "UnityEngine", "ParticleSystemStopBehavior");
        }
        inline app::ParticleSystemStopBehavior__Enum* create() {
            return il2cpp::create_object<app::ParticleSystemStopBehavior__Enum>(get_class());
        }
    } // namespace ParticleSystemStopBehavior__Enum
} // namespace app::classes::types
