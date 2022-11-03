#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MechSpiderParticles {
        namespace {
            inline app::MechSpiderParticles__Class* type_info_ref = nullptr;
        }
        inline app::MechSpiderParticles__Class** type_info = &type_info_ref;
        inline app::MechSpiderParticles__Class* get_class() {
            return il2cpp::get_class<app::MechSpiderParticles__Class>(type_info, "RootMotion.Demos", "MechSpiderParticles");
        }
        inline app::MechSpiderParticles* create() {
            return il2cpp::create_object<app::MechSpiderParticles>(get_class());
        }
    } // namespace MechSpiderParticles
} // namespace app::classes::types
