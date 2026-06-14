#pragma once
#include <Modloader/app/structs/TentacleHitReaction.h>
#include <Modloader/app/structs/TentacleHitReaction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TentacleHitReaction {
        inline app::TentacleHitReaction__Class** type_info() {
            static app::TentacleHitReaction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TentacleHitReaction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TentacleHitReaction__Class* get_class() {
            return il2cpp::get_class<app::TentacleHitReaction__Class>(type_info(), "", "TentacleHitReaction");
        }
        inline app::TentacleHitReaction* create() {
            return il2cpp::create_object<app::TentacleHitReaction>(get_class());
        }
    } // namespace TentacleHitReaction
} // namespace app::classes::types
