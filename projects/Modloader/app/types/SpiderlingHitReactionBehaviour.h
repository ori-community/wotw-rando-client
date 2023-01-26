#pragma once
#include <Modloader/app/structs/SpiderlingHitReactionBehaviour.h>
#include <Modloader/app/structs/SpiderlingHitReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderlingHitReactionBehaviour {
        inline app::SpiderlingHitReactionBehaviour__Class** type_info() {
            static app::SpiderlingHitReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderlingHitReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderlingHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderlingHitReactionBehaviour__Class>(type_info(), "", "SpiderlingHitReactionBehaviour");
        }
        inline app::SpiderlingHitReactionBehaviour* create() {
            return il2cpp::create_object<app::SpiderlingHitReactionBehaviour>(get_class());
        }
    } // namespace SpiderlingHitReactionBehaviour
} // namespace app::classes::types
