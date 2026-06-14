#pragma once
#include <Modloader/app/structs/ParticleSuspender.h>
#include <Modloader/app/structs/ParticleSuspender__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParticleSuspender {
        inline app::ParticleSuspender__Class** type_info() {
            static app::ParticleSuspender__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ParticleSuspender__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ParticleSuspender__Class* get_class() {
            return il2cpp::get_class<app::ParticleSuspender__Class>(type_info(), "", "ParticleSuspender");
        }
        inline app::ParticleSuspender* create() {
            return il2cpp::create_object<app::ParticleSuspender>(get_class());
        }
    } // namespace ParticleSuspender
} // namespace app::classes::types
