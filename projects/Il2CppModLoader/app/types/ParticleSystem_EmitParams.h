#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ParticleSystem_EmitParams {
        namespace {
            app::ParticleSystem_EmitParams__Class* type_info_ref = nullptr;
        }
        app::ParticleSystem_EmitParams__Class** type_info = &type_info_ref;
        inline app::ParticleSystem_EmitParams__Class* get_class() {
            return il2cpp::get_nested_class<app::ParticleSystem_EmitParams__Class>(type_info, "UnityEngine", "ParticleSystem", "EmitParams");
        }
        inline app::ParticleSystem_EmitParams* create() {
            return il2cpp::create_object<app::ParticleSystem_EmitParams>(get_class());
        }
        inline app::ParticleSystem_EmitParams__Boxed* box(app::ParticleSystem_EmitParams value) {
            return il2cpp::box_value<app::ParticleSystem_EmitParams__Boxed>(get_class(), value);
        }
    } // namespace ParticleSystem_EmitParams
} // namespace app::classes::types
