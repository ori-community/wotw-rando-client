#pragma once
#include <Modloader/app/structs/DropSlugHitReactionBehaviour.h>
#include <Modloader/app/structs/DropSlugHitReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DropSlugHitReactionBehaviour {
        inline app::DropSlugHitReactionBehaviour__Class** type_info() {
            static app::DropSlugHitReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DropSlugHitReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DropSlugHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::DropSlugHitReactionBehaviour__Class>(type_info(), "", "DropSlugHitReactionBehaviour");
        }
        inline app::DropSlugHitReactionBehaviour* create() {
            return il2cpp::create_object<app::DropSlugHitReactionBehaviour>(get_class());
        }
    } // namespace DropSlugHitReactionBehaviour
} // namespace app::classes::types
