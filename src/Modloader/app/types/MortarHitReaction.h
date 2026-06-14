#pragma once
#include <Modloader/app/structs/MortarHitReaction.h>
#include <Modloader/app/structs/MortarHitReaction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MortarHitReaction {
        inline app::MortarHitReaction__Class** type_info() {
            static app::MortarHitReaction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MortarHitReaction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MortarHitReaction__Class* get_class() {
            return il2cpp::get_class<app::MortarHitReaction__Class>(type_info(), "", "MortarHitReaction");
        }
        inline app::MortarHitReaction* create() {
            return il2cpp::create_object<app::MortarHitReaction>(get_class());
        }
    } // namespace MortarHitReaction
} // namespace app::classes::types
