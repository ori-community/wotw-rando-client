#pragma once
#include <Modloader/app/structs/HitReaction_HitPoint.h>
#include <Modloader/app/structs/HitReaction_HitPoint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HitReaction_HitPoint {
        inline app::HitReaction_HitPoint__Class** type_info() {
            static app::HitReaction_HitPoint__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HitReaction_HitPoint__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HitReaction_HitPoint__Class* get_class() {
            return il2cpp::get_nested_class<app::HitReaction_HitPoint__Class>(type_info(), "RootMotion.FinalIK", "HitReaction", "HitPoint");
        }
        inline app::HitReaction_HitPoint* create() {
            return il2cpp::create_object<app::HitReaction_HitPoint>(get_class());
        }
    } // namespace HitReaction_HitPoint
} // namespace app::classes::types
