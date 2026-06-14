#pragma once
#include <Modloader/app/structs/UberPoolParticlesClear.h>
#include <Modloader/app/structs/UberPoolParticlesClear__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPoolParticlesClear {
        inline app::UberPoolParticlesClear__Class** type_info() {
            static app::UberPoolParticlesClear__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberPoolParticlesClear__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberPoolParticlesClear__Class* get_class() {
            return il2cpp::get_class<app::UberPoolParticlesClear__Class>(type_info(), "", "UberPoolParticlesClear");
        }
        inline app::UberPoolParticlesClear* create() {
            return il2cpp::create_object<app::UberPoolParticlesClear>(get_class());
        }
    } // namespace UberPoolParticlesClear
} // namespace app::classes::types
