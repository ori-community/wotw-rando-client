#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PrewarmParticles {
        namespace {
            app::PrewarmParticles__Class* type_info_ref = nullptr;
        }
        app::PrewarmParticles__Class** type_info = &type_info_ref;
        inline app::PrewarmParticles__Class* get_class() {
            return il2cpp::get_class<app::PrewarmParticles__Class>(type_info, "", "PrewarmParticles");
        }
        inline app::PrewarmParticles* create() {
            return il2cpp::create_object<app::PrewarmParticles>(get_class());
        }
    } // namespace PrewarmParticles
} // namespace app::classes::types
