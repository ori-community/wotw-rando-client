#pragma once
#include <Modloader/app/structs/SneezeSlugHitReactionBehaviour.h>
#include <Modloader/app/structs/SneezeSlugHitReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SneezeSlugHitReactionBehaviour {
        inline app::SneezeSlugHitReactionBehaviour__Class** type_info() {
            static app::SneezeSlugHitReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SneezeSlugHitReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SneezeSlugHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SneezeSlugHitReactionBehaviour__Class>(type_info(), "", "SneezeSlugHitReactionBehaviour");
        }
        inline app::SneezeSlugHitReactionBehaviour* create() {
            return il2cpp::create_object<app::SneezeSlugHitReactionBehaviour>(get_class());
        }
    } // namespace SneezeSlugHitReactionBehaviour
} // namespace app::classes::types
