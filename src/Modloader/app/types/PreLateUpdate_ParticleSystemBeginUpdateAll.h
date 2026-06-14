#pragma once
#include <Modloader/app/structs/PreLateUpdate_ParticleSystemBeginUpdateAll.h>
#include <Modloader/app/structs/PreLateUpdate_ParticleSystemBeginUpdateAll__Boxed.h>
#include <Modloader/app/structs/PreLateUpdate_ParticleSystemBeginUpdateAll__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PreLateUpdate_ParticleSystemBeginUpdateAll {
        inline app::PreLateUpdate_ParticleSystemBeginUpdateAll__Class** type_info() {
            static app::PreLateUpdate_ParticleSystemBeginUpdateAll__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PreLateUpdate_ParticleSystemBeginUpdateAll__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PreLateUpdate_ParticleSystemBeginUpdateAll__Class* get_class() {
            return il2cpp::get_nested_class<app::PreLateUpdate_ParticleSystemBeginUpdateAll__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PreLateUpdate", "ParticleSystemBeginUpdateAll");
        }
        inline app::PreLateUpdate_ParticleSystemBeginUpdateAll* create() {
            return il2cpp::create_object<app::PreLateUpdate_ParticleSystemBeginUpdateAll>(get_class());
        }
        inline app::PreLateUpdate_ParticleSystemBeginUpdateAll__Boxed* box(app::PreLateUpdate_ParticleSystemBeginUpdateAll value) {
            return il2cpp::box_value<app::PreLateUpdate_ParticleSystemBeginUpdateAll__Boxed>(get_class(), value);
        }
    } // namespace PreLateUpdate_ParticleSystemBeginUpdateAll
} // namespace app::classes::types
