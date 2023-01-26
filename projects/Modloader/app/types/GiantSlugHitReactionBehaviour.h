#pragma once
#include <Modloader/app/structs/GiantSlugHitReactionBehaviour.h>
#include <Modloader/app/structs/GiantSlugHitReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GiantSlugHitReactionBehaviour {
        inline app::GiantSlugHitReactionBehaviour__Class** type_info() {
            static app::GiantSlugHitReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GiantSlugHitReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GiantSlugHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::GiantSlugHitReactionBehaviour__Class>(type_info(), "", "GiantSlugHitReactionBehaviour");
        }
        inline app::GiantSlugHitReactionBehaviour* create() {
            return il2cpp::create_object<app::GiantSlugHitReactionBehaviour>(get_class());
        }
    } // namespace GiantSlugHitReactionBehaviour
} // namespace app::classes::types
