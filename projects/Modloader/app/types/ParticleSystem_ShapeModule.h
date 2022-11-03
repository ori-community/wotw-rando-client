#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ParticleSystem_ShapeModule {
        namespace {
            inline app::ParticleSystem_ShapeModule__Class* type_info_ref = nullptr;
        }
        inline app::ParticleSystem_ShapeModule__Class** type_info = &type_info_ref;
        inline app::ParticleSystem_ShapeModule__Class* get_class() {
            return il2cpp::get_nested_class<app::ParticleSystem_ShapeModule__Class>(type_info, "UnityEngine", "ParticleSystem", "ShapeModule");
        }
        inline app::ParticleSystem_ShapeModule* create() {
            return il2cpp::create_object<app::ParticleSystem_ShapeModule>(get_class());
        }
        inline app::ParticleSystem_ShapeModule__Boxed* box(app::ParticleSystem_ShapeModule value) {
            return il2cpp::box_value<app::ParticleSystem_ShapeModule__Boxed>(get_class(), value);
        }
    } // namespace ParticleSystem_ShapeModule
} // namespace app::classes::types
