#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LaserShooterDeathReactionBehaviour__Class.h>
#include <Modloader/app/structs/LaserShooterDeathReactionBehaviour.h>

namespace app::classes::types {
    namespace LaserShooterDeathReactionBehaviour {
        namespace {
            inline app::LaserShooterDeathReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::LaserShooterDeathReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::LaserShooterDeathReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterDeathReactionBehaviour__Class>(type_info, "", "LaserShooterDeathReactionBehaviour");
        }
        inline app::LaserShooterDeathReactionBehaviour* create() {
            return il2cpp::create_object<app::LaserShooterDeathReactionBehaviour>(get_class());
        }
    } // namespace LaserShooterDeathReactionBehaviour
} // namespace app::classes::types
