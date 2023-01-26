#pragma once
#include <Modloader/app/structs/PreserveParticleDampening.h>
#include <Modloader/app/structs/PreserveParticleDampening__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PreserveParticleDampening {
        inline app::PreserveParticleDampening__Class** type_info() {
            static app::PreserveParticleDampening__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PreserveParticleDampening__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PreserveParticleDampening__Class* get_class() {
            return il2cpp::get_class<app::PreserveParticleDampening__Class>(type_info(), "", "PreserveParticleDampening");
        }
        inline app::PreserveParticleDampening* create() {
            return il2cpp::create_object<app::PreserveParticleDampening>(get_class());
        }
    } // namespace PreserveParticleDampening
} // namespace app::classes::types
