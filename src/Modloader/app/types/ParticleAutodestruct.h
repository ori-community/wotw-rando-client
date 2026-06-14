#pragma once
#include <Modloader/app/structs/ParticleAutodestruct.h>
#include <Modloader/app/structs/ParticleAutodestruct__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParticleAutodestruct {
        inline app::ParticleAutodestruct__Class** type_info() {
            static app::ParticleAutodestruct__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ParticleAutodestruct__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ParticleAutodestruct__Class* get_class() {
            return il2cpp::get_class<app::ParticleAutodestruct__Class>(type_info(), "", "ParticleAutodestruct");
        }
        inline app::ParticleAutodestruct* create() {
            return il2cpp::create_object<app::ParticleAutodestruct>(get_class());
        }
    } // namespace ParticleAutodestruct
} // namespace app::classes::types
