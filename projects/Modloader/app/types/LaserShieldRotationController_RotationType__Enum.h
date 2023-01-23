#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LaserShieldRotationController_RotationType__Enum__Class.h>
#include <Modloader/app/structs/LaserShieldRotationController_RotationType__Enum.h>

namespace app::classes::types {
    namespace LaserShieldRotationController_RotationType__Enum {
        namespace {
            inline app::LaserShieldRotationController_RotationType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::LaserShieldRotationController_RotationType__Enum__Class** type_info = &type_info_ref;
        inline app::LaserShieldRotationController_RotationType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LaserShieldRotationController_RotationType__Enum__Class>(type_info, "", "LaserShieldRotationController", "RotationType");
        }
        inline app::LaserShieldRotationController_RotationType__Enum* create() {
            return il2cpp::create_object<app::LaserShieldRotationController_RotationType__Enum>(get_class());
        }
    } // namespace LaserShieldRotationController_RotationType__Enum
} // namespace app::classes::types
