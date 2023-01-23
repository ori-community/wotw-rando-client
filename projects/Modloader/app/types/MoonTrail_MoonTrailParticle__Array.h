#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonTrail_MoonTrailParticle__Array__Class.h>
#include <Modloader/app/structs/MoonTrail_MoonTrailParticle__Array.h>
#include <Modloader/app/structs/MoonTrail_MoonTrailParticle__Array__Array.h>

namespace app::classes::types {
    namespace MoonTrail_MoonTrailParticle__Array {
        inline app::MoonTrail_MoonTrailParticle__Array__Class** type_info = (app::MoonTrail_MoonTrailParticle__Array__Class**)(modloader::win::memory::resolve_rva(0x04710530));
        inline app::MoonTrail_MoonTrailParticle__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonTrail_MoonTrailParticle__Array__Class>(type_info, "Moon", "MoonTrail+MoonTrailParticle[]");
        }
        inline app::MoonTrail_MoonTrailParticle__Array* create() {
            return il2cpp::create_object<app::MoonTrail_MoonTrailParticle__Array>(get_class());
        }
        inline app::MoonTrail_MoonTrailParticle__Array__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonTrail_MoonTrailParticle__Array__Array>(get_class(), size);
        }
        inline app::MoonTrail_MoonTrailParticle__Array__Array* create_array(const std::vector<app::MoonTrail_MoonTrailParticle__Array*>& items) {
            return il2cpp::array_new<app::MoonTrail_MoonTrailParticle__Array__Array>(get_class(), items);
        }
    } // namespace MoonTrail_MoonTrailParticle__Array
} // namespace app::classes::types
