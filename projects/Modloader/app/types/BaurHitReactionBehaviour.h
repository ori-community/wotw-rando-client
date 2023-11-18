#pragma once
#include <Modloader/app/structs/BaurHitReactionBehaviour.h>
#include <Modloader/app/structs/BaurHitReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BaurHitReactionBehaviour {
        inline app::BaurHitReactionBehaviour__Class** type_info() {
            static app::BaurHitReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BaurHitReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BaurHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::BaurHitReactionBehaviour__Class>(type_info(), "", "BaurHitReactionBehaviour");
        }
        inline app::BaurHitReactionBehaviour* create() {
            return il2cpp::create_object<app::BaurHitReactionBehaviour>(get_class());
        }
    } // namespace BaurHitReactionBehaviour
} // namespace app::classes::types
