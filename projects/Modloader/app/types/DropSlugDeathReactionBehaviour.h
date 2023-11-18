#pragma once
#include <Modloader/app/structs/DropSlugDeathReactionBehaviour.h>
#include <Modloader/app/structs/DropSlugDeathReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DropSlugDeathReactionBehaviour {
        inline app::DropSlugDeathReactionBehaviour__Class** type_info() {
            static app::DropSlugDeathReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DropSlugDeathReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DropSlugDeathReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::DropSlugDeathReactionBehaviour__Class>(type_info(), "", "DropSlugDeathReactionBehaviour");
        }
        inline app::DropSlugDeathReactionBehaviour* create() {
            return il2cpp::create_object<app::DropSlugDeathReactionBehaviour>(get_class());
        }
    } // namespace DropSlugDeathReactionBehaviour
} // namespace app::classes::types
