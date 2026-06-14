#pragma once
#include <Modloader/app/structs/EntityHitReaction.h>
#include <Modloader/app/structs/EntityHitReaction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityHitReaction {
        inline app::EntityHitReaction__Class** type_info() {
            static app::EntityHitReaction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityHitReaction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityHitReaction__Class* get_class() {
            return il2cpp::get_class<app::EntityHitReaction__Class>(type_info(), "Moon", "EntityHitReaction");
        }
        inline app::EntityHitReaction* create() {
            return il2cpp::create_object<app::EntityHitReaction>(get_class());
        }
    } // namespace EntityHitReaction
} // namespace app::classes::types
