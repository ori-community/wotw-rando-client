#pragma once
#include <Modloader/app/structs/KwolokBossHitReactionBehaviour.h>
#include <Modloader/app/structs/KwolokBossHitReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossHitReactionBehaviour {
        inline app::KwolokBossHitReactionBehaviour__Class** type_info() {
            static app::KwolokBossHitReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KwolokBossHitReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KwolokBossHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossHitReactionBehaviour__Class>(type_info(), "", "KwolokBossHitReactionBehaviour");
        }
        inline app::KwolokBossHitReactionBehaviour* create() {
            return il2cpp::create_object<app::KwolokBossHitReactionBehaviour>(get_class());
        }
    } // namespace KwolokBossHitReactionBehaviour
} // namespace app::classes::types
