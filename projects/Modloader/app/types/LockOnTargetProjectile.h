#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LockOnTargetProjectile__Class.h>
#include <Modloader/app/structs/LockOnTargetProjectile.h>

namespace app::classes::types {
    namespace LockOnTargetProjectile {
        namespace {
            inline app::LockOnTargetProjectile__Class* type_info_ref = nullptr;
        }
        inline app::LockOnTargetProjectile__Class** type_info = &type_info_ref;
        inline app::LockOnTargetProjectile__Class* get_class() {
            return il2cpp::get_class<app::LockOnTargetProjectile__Class>(type_info, "", "LockOnTargetProjectile");
        }
        inline app::LockOnTargetProjectile* create() {
            return il2cpp::create_object<app::LockOnTargetProjectile>(get_class());
        }
    } // namespace LockOnTargetProjectile
} // namespace app::classes::types
