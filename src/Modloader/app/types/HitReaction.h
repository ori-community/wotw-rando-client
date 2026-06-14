#pragma once
#include <Modloader/app/structs/HitReaction.h>
#include <Modloader/app/structs/HitReaction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HitReaction {
        inline app::HitReaction__Class** type_info() {
            static app::HitReaction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HitReaction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HitReaction__Class* get_class() {
            return il2cpp::get_class<app::HitReaction__Class>(type_info(), "RootMotion.FinalIK", "HitReaction");
        }
        inline app::HitReaction* create() {
            return il2cpp::create_object<app::HitReaction>(get_class());
        }
    } // namespace HitReaction
} // namespace app::classes::types
