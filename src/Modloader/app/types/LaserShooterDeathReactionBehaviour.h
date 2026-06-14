#pragma once
#include <Modloader/app/structs/LaserShooterDeathReactionBehaviour.h>
#include <Modloader/app/structs/LaserShooterDeathReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShooterDeathReactionBehaviour {
        inline app::LaserShooterDeathReactionBehaviour__Class** type_info() {
            static app::LaserShooterDeathReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserShooterDeathReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserShooterDeathReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterDeathReactionBehaviour__Class>(type_info(), "", "LaserShooterDeathReactionBehaviour");
        }
        inline app::LaserShooterDeathReactionBehaviour* create() {
            return il2cpp::create_object<app::LaserShooterDeathReactionBehaviour>(get_class());
        }
    } // namespace LaserShooterDeathReactionBehaviour
} // namespace app::classes::types
