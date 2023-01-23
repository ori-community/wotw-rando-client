#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LaserShooterMinibossWaitWhileMovingBehaviour__Class.h>
#include <Modloader/app/structs/LaserShooterMinibossWaitWhileMovingBehaviour.h>

namespace app::classes::types {
    namespace LaserShooterMinibossWaitWhileMovingBehaviour {
        namespace {
            inline app::LaserShooterMinibossWaitWhileMovingBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::LaserShooterMinibossWaitWhileMovingBehaviour__Class** type_info = &type_info_ref;
        inline app::LaserShooterMinibossWaitWhileMovingBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterMinibossWaitWhileMovingBehaviour__Class>(type_info, "", "LaserShooterMinibossWaitWhileMovingBehaviour");
        }
        inline app::LaserShooterMinibossWaitWhileMovingBehaviour* create() {
            return il2cpp::create_object<app::LaserShooterMinibossWaitWhileMovingBehaviour>(get_class());
        }
    } // namespace LaserShooterMinibossWaitWhileMovingBehaviour
} // namespace app::classes::types
