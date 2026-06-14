#pragma once
#include <Modloader/app/structs/LaserShooterHitReactionBehaviour.h>
#include <Modloader/app/structs/LaserShooterHitReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShooterHitReactionBehaviour {
        inline app::LaserShooterHitReactionBehaviour__Class** type_info() {
            static app::LaserShooterHitReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserShooterHitReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserShooterHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterHitReactionBehaviour__Class>(type_info(), "", "LaserShooterHitReactionBehaviour");
        }
        inline app::LaserShooterHitReactionBehaviour* create() {
            return il2cpp::create_object<app::LaserShooterHitReactionBehaviour>(get_class());
        }
    } // namespace LaserShooterHitReactionBehaviour
} // namespace app::classes::types
