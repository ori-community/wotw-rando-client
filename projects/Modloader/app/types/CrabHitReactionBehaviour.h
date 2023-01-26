#pragma once
#include <Modloader/app/structs/CrabHitReactionBehaviour.h>
#include <Modloader/app/structs/CrabHitReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrabHitReactionBehaviour {
        inline app::CrabHitReactionBehaviour__Class** type_info() {
            static app::CrabHitReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CrabHitReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CrabHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::CrabHitReactionBehaviour__Class>(type_info(), "", "CrabHitReactionBehaviour");
        }
        inline app::CrabHitReactionBehaviour* create() {
            return il2cpp::create_object<app::CrabHitReactionBehaviour>(get_class());
        }
    } // namespace CrabHitReactionBehaviour
} // namespace app::classes::types
