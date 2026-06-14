#pragma once
#include <Modloader/app/structs/HornBugHitReactionBehaviour.h>
#include <Modloader/app/structs/HornBugHitReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HornBugHitReactionBehaviour {
        inline app::HornBugHitReactionBehaviour__Class** type_info() {
            static app::HornBugHitReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HornBugHitReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HornBugHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::HornBugHitReactionBehaviour__Class>(type_info(), "", "HornBugHitReactionBehaviour");
        }
        inline app::HornBugHitReactionBehaviour* create() {
            return il2cpp::create_object<app::HornBugHitReactionBehaviour>(get_class());
        }
    } // namespace HornBugHitReactionBehaviour
} // namespace app::classes::types
