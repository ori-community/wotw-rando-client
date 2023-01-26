#pragma once
#include <Modloader/app/structs/LaserShooterMinibossPathMover_State__Enum.h>
#include <Modloader/app/structs/LaserShooterMinibossPathMover_State__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShooterMinibossPathMover_State__Enum {
        inline app::LaserShooterMinibossPathMover_State__Enum__Class** type_info() {
            static app::LaserShooterMinibossPathMover_State__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserShooterMinibossPathMover_State__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserShooterMinibossPathMover_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LaserShooterMinibossPathMover_State__Enum__Class>(type_info(), "", "LaserShooterMinibossPathMover", "State");
        }
        inline app::LaserShooterMinibossPathMover_State__Enum* create() {
            return il2cpp::create_object<app::LaserShooterMinibossPathMover_State__Enum>(get_class());
        }
    } // namespace LaserShooterMinibossPathMover_State__Enum
} // namespace app::classes::types
