#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SandTrailParticles__Class.h>
#include <Modloader/app/structs/SandTrailParticles.h>

namespace app::classes::types {
    namespace SandTrailParticles {
        namespace {
            inline app::SandTrailParticles__Class* type_info_ref = nullptr;
        }
        inline app::SandTrailParticles__Class** type_info = &type_info_ref;
        inline app::SandTrailParticles__Class* get_class() {
            return il2cpp::get_class<app::SandTrailParticles__Class>(type_info, "", "SandTrailParticles");
        }
        inline app::SandTrailParticles* create() {
            return il2cpp::create_object<app::SandTrailParticles>(get_class());
        }
    } // namespace SandTrailParticles
} // namespace app::classes::types
