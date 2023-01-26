#pragma once
#include <Modloader/app/structs/SpiderBossHitReactionBehaviour.h>
#include <Modloader/app/structs/SpiderBossHitReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossHitReactionBehaviour {
        inline app::SpiderBossHitReactionBehaviour__Class** type_info() {
            static app::SpiderBossHitReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossHitReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossHitReactionBehaviour__Class>(type_info(), "", "SpiderBossHitReactionBehaviour");
        }
        inline app::SpiderBossHitReactionBehaviour* create() {
            return il2cpp::create_object<app::SpiderBossHitReactionBehaviour>(get_class());
        }
    } // namespace SpiderBossHitReactionBehaviour
} // namespace app::classes::types
