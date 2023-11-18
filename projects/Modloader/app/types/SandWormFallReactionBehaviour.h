#pragma once
#include <Modloader/app/structs/SandWormFallReactionBehaviour.h>
#include <Modloader/app/structs/SandWormFallReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandWormFallReactionBehaviour {
        inline app::SandWormFallReactionBehaviour__Class** type_info() {
            static app::SandWormFallReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SandWormFallReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SandWormFallReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SandWormFallReactionBehaviour__Class>(type_info(), "", "SandWormFallReactionBehaviour");
        }
        inline app::SandWormFallReactionBehaviour* create() {
            return il2cpp::create_object<app::SandWormFallReactionBehaviour>(get_class());
        }
    } // namespace SandWormFallReactionBehaviour
} // namespace app::classes::types
