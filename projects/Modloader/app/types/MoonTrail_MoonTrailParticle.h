#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTrail_MoonTrailParticle {
        namespace {
            inline app::MoonTrail_MoonTrailParticle__Class* type_info_ref = nullptr;
        }
        inline app::MoonTrail_MoonTrailParticle__Class** type_info = &type_info_ref;
        inline app::MoonTrail_MoonTrailParticle__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTrail_MoonTrailParticle__Class>(type_info, "Moon", "MoonTrail", "MoonTrailParticle");
        }
        inline app::MoonTrail_MoonTrailParticle* create() {
            return il2cpp::create_object<app::MoonTrail_MoonTrailParticle>(get_class());
        }
        inline app::MoonTrail_MoonTrailParticle__Boxed* box(app::MoonTrail_MoonTrailParticle value) {
            return il2cpp::box_value<app::MoonTrail_MoonTrailParticle__Boxed>(get_class(), value);
        }
        inline app::MoonTrail_MoonTrailParticle__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonTrail_MoonTrailParticle__Array>(get_class(), size);
        }
        inline app::MoonTrail_MoonTrailParticle__Array* create_array(const std::vector<app::MoonTrail_MoonTrailParticle>& items) {
            return il2cpp::array_new<app::MoonTrail_MoonTrailParticle__Array>(get_class(), items);
        }
    } // namespace MoonTrail_MoonTrailParticle
} // namespace app::classes::types
