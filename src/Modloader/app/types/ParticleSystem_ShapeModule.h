#pragma once
#include <Modloader/app/structs/ParticleSystem_ShapeModule.h>
#include <Modloader/app/structs/ParticleSystem_ShapeModule__Boxed.h>
#include <Modloader/app/structs/ParticleSystem_ShapeModule__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParticleSystem_ShapeModule {
        inline app::ParticleSystem_ShapeModule__Class** type_info() {
            static app::ParticleSystem_ShapeModule__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ParticleSystem_ShapeModule__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ParticleSystem_ShapeModule__Class* get_class() {
            return il2cpp::get_nested_class<app::ParticleSystem_ShapeModule__Class>(type_info(), "UnityEngine", "ParticleSystem", "ShapeModule");
        }
        inline app::ParticleSystem_ShapeModule* create() {
            return il2cpp::create_object<app::ParticleSystem_ShapeModule>(get_class());
        }
        inline app::ParticleSystem_ShapeModule__Boxed* box(app::ParticleSystem_ShapeModule value) {
            return il2cpp::box_value<app::ParticleSystem_ShapeModule__Boxed>(get_class(), value);
        }
    } // namespace ParticleSystem_ShapeModule
} // namespace app::classes::types
