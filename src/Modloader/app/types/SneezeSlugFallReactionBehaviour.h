#pragma once
#include <Modloader/app/structs/SneezeSlugFallReactionBehaviour.h>
#include <Modloader/app/structs/SneezeSlugFallReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SneezeSlugFallReactionBehaviour {
        inline app::SneezeSlugFallReactionBehaviour__Class** type_info() {
            static app::SneezeSlugFallReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SneezeSlugFallReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SneezeSlugFallReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SneezeSlugFallReactionBehaviour__Class>(type_info(), "", "SneezeSlugFallReactionBehaviour");
        }
        inline app::SneezeSlugFallReactionBehaviour* create() {
            return il2cpp::create_object<app::SneezeSlugFallReactionBehaviour>(get_class());
        }
    } // namespace SneezeSlugFallReactionBehaviour
} // namespace app::classes::types
