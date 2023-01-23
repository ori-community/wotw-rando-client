#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LaserShooterChangePositionBehaviour_MovePosition__Enum__Class.h>
#include <Modloader/app/structs/LaserShooterChangePositionBehaviour_MovePosition__Enum.h>

namespace app::classes::types {
    namespace LaserShooterChangePositionBehaviour_MovePosition__Enum {
        namespace {
            inline app::LaserShooterChangePositionBehaviour_MovePosition__Enum__Class* type_info_ref = nullptr;
        }
        inline app::LaserShooterChangePositionBehaviour_MovePosition__Enum__Class** type_info = &type_info_ref;
        inline app::LaserShooterChangePositionBehaviour_MovePosition__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LaserShooterChangePositionBehaviour_MovePosition__Enum__Class>(type_info, "", "LaserShooterChangePositionBehaviour", "MovePosition");
        }
        inline app::LaserShooterChangePositionBehaviour_MovePosition__Enum* create() {
            return il2cpp::create_object<app::LaserShooterChangePositionBehaviour_MovePosition__Enum>(get_class());
        }
    } // namespace LaserShooterChangePositionBehaviour_MovePosition__Enum
} // namespace app::classes::types
