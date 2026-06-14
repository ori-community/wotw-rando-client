#pragma once
#include <Modloader/app/structs/DropSlugFallReactionBehaviour.h>
#include <Modloader/app/structs/DropSlugFallReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DropSlugFallReactionBehaviour {
        inline app::DropSlugFallReactionBehaviour__Class** type_info() {
            static app::DropSlugFallReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DropSlugFallReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DropSlugFallReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::DropSlugFallReactionBehaviour__Class>(type_info(), "", "DropSlugFallReactionBehaviour");
        }
        inline app::DropSlugFallReactionBehaviour* create() {
            return il2cpp::create_object<app::DropSlugFallReactionBehaviour>(get_class());
        }
    } // namespace DropSlugFallReactionBehaviour
} // namespace app::classes::types
