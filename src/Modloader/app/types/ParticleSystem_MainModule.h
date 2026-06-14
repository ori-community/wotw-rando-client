#pragma once
#include <Modloader/app/structs/ParticleSystem_MainModule.h>
#include <Modloader/app/structs/ParticleSystem_MainModule__Boxed.h>
#include <Modloader/app/structs/ParticleSystem_MainModule__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParticleSystem_MainModule {
        inline app::ParticleSystem_MainModule__Class** type_info() {
            static app::ParticleSystem_MainModule__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ParticleSystem_MainModule__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ParticleSystem_MainModule__Class* get_class() {
            return il2cpp::get_nested_class<app::ParticleSystem_MainModule__Class>(type_info(), "UnityEngine", "ParticleSystem", "MainModule");
        }
        inline app::ParticleSystem_MainModule* create() {
            return il2cpp::create_object<app::ParticleSystem_MainModule>(get_class());
        }
        inline app::ParticleSystem_MainModule__Boxed* box(app::ParticleSystem_MainModule value) {
            return il2cpp::box_value<app::ParticleSystem_MainModule__Boxed>(get_class(), value);
        }
    } // namespace ParticleSystem_MainModule
} // namespace app::classes::types
