#pragma once
#include <Modloader/app/structs/TransparentWallRevealedCondition.h>
#include <Modloader/app/structs/TransparentWallRevealedCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransparentWallRevealedCondition {
        inline app::TransparentWallRevealedCondition__Class** type_info() {
            static app::TransparentWallRevealedCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TransparentWallRevealedCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TransparentWallRevealedCondition__Class* get_class() {
            return il2cpp::get_class<app::TransparentWallRevealedCondition__Class>(type_info(), "", "TransparentWallRevealedCondition");
        }
        inline app::TransparentWallRevealedCondition* create() {
            return il2cpp::create_object<app::TransparentWallRevealedCondition>(get_class());
        }
    } // namespace TransparentWallRevealedCondition
} // namespace app::classes::types
