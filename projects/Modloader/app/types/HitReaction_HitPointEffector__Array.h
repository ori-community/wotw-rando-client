#pragma once
#include <Modloader/app/structs/HitReaction_HitPointEffector__Array.h>
#include <Modloader/app/structs/HitReaction_HitPointEffector__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HitReaction_HitPointEffector__Array {
        inline app::HitReaction_HitPointEffector__Array__Class** type_info() {
            static app::HitReaction_HitPointEffector__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HitReaction_HitPointEffector__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HitReaction_HitPointEffector__Array__Class* get_class() {
            return il2cpp::get_class<app::HitReaction_HitPointEffector__Array__Class>(type_info(), "RootMotion.FinalIK", "HitReaction+HitPointEffector[]");
        }
        inline app::HitReaction_HitPointEffector__Array* create() {
            return il2cpp::create_object<app::HitReaction_HitPointEffector__Array>(get_class());
        }
    } // namespace HitReaction_HitPointEffector__Array
} // namespace app::classes::types
