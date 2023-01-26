#pragma once
#include <Modloader/app/structs/HornbugBossHitReactionsBehaviour.h>
#include <Modloader/app/structs/HornbugBossHitReactionsBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HornbugBossHitReactionsBehaviour {
        inline app::HornbugBossHitReactionsBehaviour__Class** type_info() {
            static app::HornbugBossHitReactionsBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HornbugBossHitReactionsBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HornbugBossHitReactionsBehaviour__Class* get_class() {
            return il2cpp::get_class<app::HornbugBossHitReactionsBehaviour__Class>(type_info(), "", "HornbugBossHitReactionsBehaviour");
        }
        inline app::HornbugBossHitReactionsBehaviour* create() {
            return il2cpp::create_object<app::HornbugBossHitReactionsBehaviour>(get_class());
        }
    } // namespace HornbugBossHitReactionsBehaviour
} // namespace app::classes::types
