#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossHitReactionBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossHitReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossHitReactionBehaviour {
        inline app::PetrifiedOwlBossHitReactionBehaviour__Class** type_info() {
            static app::PetrifiedOwlBossHitReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlBossHitReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlBossHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossHitReactionBehaviour__Class>(type_info(), "", "PetrifiedOwlBossHitReactionBehaviour");
        }
        inline app::PetrifiedOwlBossHitReactionBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossHitReactionBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossHitReactionBehaviour
} // namespace app::classes::types
