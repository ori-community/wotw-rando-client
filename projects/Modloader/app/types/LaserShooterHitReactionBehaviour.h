#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LaserShooterHitReactionBehaviour__Class.h>
#include <Modloader/app/structs/LaserShooterHitReactionBehaviour.h>

namespace app::classes::types {
    namespace LaserShooterHitReactionBehaviour {
        namespace {
            inline app::LaserShooterHitReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::LaserShooterHitReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::LaserShooterHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterHitReactionBehaviour__Class>(type_info, "", "LaserShooterHitReactionBehaviour");
        }
        inline app::LaserShooterHitReactionBehaviour* create() {
            return il2cpp::create_object<app::LaserShooterHitReactionBehaviour>(get_class());
        }
    } // namespace LaserShooterHitReactionBehaviour
} // namespace app::classes::types
