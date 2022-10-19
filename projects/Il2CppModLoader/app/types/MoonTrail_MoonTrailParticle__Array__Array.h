#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTrail_MoonTrailParticle__Array__Array {
        namespace {
            inline app::MoonTrail_MoonTrailParticle__Array__Array__Class* type_info_ref = nullptr;
        }
        inline app::MoonTrail_MoonTrailParticle__Array__Array__Class** type_info = &type_info_ref;
        inline app::MoonTrail_MoonTrailParticle__Array__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonTrail_MoonTrailParticle__Array__Array__Class>(type_info, "Moon", "MoonTrail+MoonTrailParticle[][]");
        }
        inline app::MoonTrail_MoonTrailParticle__Array__Array* create() {
            return il2cpp::create_object<app::MoonTrail_MoonTrailParticle__Array__Array>(get_class());
        }
    } // namespace MoonTrail_MoonTrailParticle__Array__Array
} // namespace app::classes::types
