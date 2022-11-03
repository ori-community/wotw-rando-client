#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PostLateUpdate_ParticleSystemEndUpdateAll {
        namespace {
            inline app::PostLateUpdate_ParticleSystemEndUpdateAll__Class* type_info_ref = nullptr;
        }
        inline app::PostLateUpdate_ParticleSystemEndUpdateAll__Class** type_info = &type_info_ref;
        inline app::PostLateUpdate_ParticleSystemEndUpdateAll__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_ParticleSystemEndUpdateAll__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "ParticleSystemEndUpdateAll");
        }
        inline app::PostLateUpdate_ParticleSystemEndUpdateAll* create() {
            return il2cpp::create_object<app::PostLateUpdate_ParticleSystemEndUpdateAll>(get_class());
        }
        inline app::PostLateUpdate_ParticleSystemEndUpdateAll__Boxed* box(app::PostLateUpdate_ParticleSystemEndUpdateAll value) {
            return il2cpp::box_value<app::PostLateUpdate_ParticleSystemEndUpdateAll__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_ParticleSystemEndUpdateAll
} // namespace app::classes::types
