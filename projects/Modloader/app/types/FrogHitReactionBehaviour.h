#pragma once
#include <Modloader/app/structs/FrogHitReactionBehaviour.h>
#include <Modloader/app/structs/FrogHitReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FrogHitReactionBehaviour {
        inline app::FrogHitReactionBehaviour__Class** type_info() {
            static app::FrogHitReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FrogHitReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FrogHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::FrogHitReactionBehaviour__Class>(type_info(), "", "FrogHitReactionBehaviour");
        }
        inline app::FrogHitReactionBehaviour* create() {
            return il2cpp::create_object<app::FrogHitReactionBehaviour>(get_class());
        }
    } // namespace FrogHitReactionBehaviour
} // namespace app::classes::types
