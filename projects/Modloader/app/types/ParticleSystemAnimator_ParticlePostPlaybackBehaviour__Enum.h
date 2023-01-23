#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ParticleSystemAnimator_ParticlePostPlaybackBehaviour__Enum__Class.h>
#include <Modloader/app/structs/ParticleSystemAnimator_ParticlePostPlaybackBehaviour__Enum.h>

namespace app::classes::types {
    namespace ParticleSystemAnimator_ParticlePostPlaybackBehaviour__Enum {
        namespace {
            inline app::ParticleSystemAnimator_ParticlePostPlaybackBehaviour__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ParticleSystemAnimator_ParticlePostPlaybackBehaviour__Enum__Class** type_info = &type_info_ref;
        inline app::ParticleSystemAnimator_ParticlePostPlaybackBehaviour__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ParticleSystemAnimator_ParticlePostPlaybackBehaviour__Enum__Class>(type_info, "Moon.Timeline", "ParticleSystemAnimator", "ParticlePostPlaybackBehaviour");
        }
        inline app::ParticleSystemAnimator_ParticlePostPlaybackBehaviour__Enum* create() {
            return il2cpp::create_object<app::ParticleSystemAnimator_ParticlePostPlaybackBehaviour__Enum>(get_class());
        }
    } // namespace ParticleSystemAnimator_ParticlePostPlaybackBehaviour__Enum
} // namespace app::classes::types
