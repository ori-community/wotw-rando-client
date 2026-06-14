#pragma once
#include <Modloader/app/structs/SandwormHitReaction.h>
#include <Modloader/app/structs/SandwormHitReaction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandwormHitReaction {
        inline app::SandwormHitReaction__Class** type_info() {
            static app::SandwormHitReaction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SandwormHitReaction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SandwormHitReaction__Class* get_class() {
            return il2cpp::get_class<app::SandwormHitReaction__Class>(type_info(), "", "SandwormHitReaction");
        }
        inline app::SandwormHitReaction* create() {
            return il2cpp::create_object<app::SandwormHitReaction>(get_class());
        }
    } // namespace SandwormHitReaction
} // namespace app::classes::types
