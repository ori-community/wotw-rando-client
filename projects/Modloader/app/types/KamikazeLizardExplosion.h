#pragma once
#include <Modloader/app/structs/KamikazeLizardExplosion.h>
#include <Modloader/app/structs/KamikazeLizardExplosion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KamikazeLizardExplosion {
        inline app::KamikazeLizardExplosion__Class** type_info() {
            static app::KamikazeLizardExplosion__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KamikazeLizardExplosion__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KamikazeLizardExplosion__Class* get_class() {
            return il2cpp::get_class<app::KamikazeLizardExplosion__Class>(type_info(), "", "KamikazeLizardExplosion");
        }
        inline app::KamikazeLizardExplosion* create() {
            return il2cpp::create_object<app::KamikazeLizardExplosion>(get_class());
        }
    } // namespace KamikazeLizardExplosion
} // namespace app::classes::types
