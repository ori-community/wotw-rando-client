#pragma once
#include <Modloader/app/structs/LizardHitReactionBehaviour.h>
#include <Modloader/app/structs/LizardHitReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LizardHitReactionBehaviour {
        inline app::LizardHitReactionBehaviour__Class** type_info() {
            static app::LizardHitReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LizardHitReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LizardHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LizardHitReactionBehaviour__Class>(type_info(), "", "LizardHitReactionBehaviour");
        }
        inline app::LizardHitReactionBehaviour* create() {
            return il2cpp::create_object<app::LizardHitReactionBehaviour>(get_class());
        }
    } // namespace LizardHitReactionBehaviour
} // namespace app::classes::types
