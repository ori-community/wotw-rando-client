#pragma once
#include <Modloader/app/structs/KamikazeLizardHitReactionBehaviour.h>
#include <Modloader/app/structs/KamikazeLizardHitReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KamikazeLizardHitReactionBehaviour {
        inline app::KamikazeLizardHitReactionBehaviour__Class** type_info() {
            static app::KamikazeLizardHitReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KamikazeLizardHitReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KamikazeLizardHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KamikazeLizardHitReactionBehaviour__Class>(type_info(), "", "KamikazeLizardHitReactionBehaviour");
        }
        inline app::KamikazeLizardHitReactionBehaviour* create() {
            return il2cpp::create_object<app::KamikazeLizardHitReactionBehaviour>(get_class());
        }
    } // namespace KamikazeLizardHitReactionBehaviour
} // namespace app::classes::types
