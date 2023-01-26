#pragma once
#include <Modloader/app/structs/SeinLeafParticles.h>
#include <Modloader/app/structs/SeinLeafParticles__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinLeafParticles {
        inline app::SeinLeafParticles__Class** type_info() {
            static app::SeinLeafParticles__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinLeafParticles__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinLeafParticles__Class* get_class() {
            return il2cpp::get_class<app::SeinLeafParticles__Class>(type_info(), "", "SeinLeafParticles");
        }
        inline app::SeinLeafParticles* create() {
            return il2cpp::create_object<app::SeinLeafParticles>(get_class());
        }
    } // namespace SeinLeafParticles
} // namespace app::classes::types
