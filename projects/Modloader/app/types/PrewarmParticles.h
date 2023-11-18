#pragma once
#include <Modloader/app/structs/PrewarmParticles.h>
#include <Modloader/app/structs/PrewarmParticles__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PrewarmParticles {
        inline app::PrewarmParticles__Class** type_info() {
            static app::PrewarmParticles__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PrewarmParticles__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PrewarmParticles__Class* get_class() {
            return il2cpp::get_class<app::PrewarmParticles__Class>(type_info(), "", "PrewarmParticles");
        }
        inline app::PrewarmParticles* create() {
            return il2cpp::create_object<app::PrewarmParticles>(get_class());
        }
    } // namespace PrewarmParticles
} // namespace app::classes::types
