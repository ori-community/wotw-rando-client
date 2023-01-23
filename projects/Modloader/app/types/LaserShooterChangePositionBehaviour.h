#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LaserShooterChangePositionBehaviour__Class.h>
#include <Modloader/app/structs/LaserShooterChangePositionBehaviour.h>

namespace app::classes::types {
    namespace LaserShooterChangePositionBehaviour {
        namespace {
            inline app::LaserShooterChangePositionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::LaserShooterChangePositionBehaviour__Class** type_info = &type_info_ref;
        inline app::LaserShooterChangePositionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterChangePositionBehaviour__Class>(type_info, "", "LaserShooterChangePositionBehaviour");
        }
        inline app::LaserShooterChangePositionBehaviour* create() {
            return il2cpp::create_object<app::LaserShooterChangePositionBehaviour>(get_class());
        }
    } // namespace LaserShooterChangePositionBehaviour
} // namespace app::classes::types
