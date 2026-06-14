#pragma once
#include <Modloader/app/structs/WeaponBase.h>
#include <Modloader/app/structs/WeaponBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WeaponBase {
        inline app::WeaponBase__Class** type_info() {
            static app::WeaponBase__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WeaponBase__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WeaponBase__Class* get_class() {
            return il2cpp::get_class<app::WeaponBase__Class>(type_info(), "RootMotion.Demos", "WeaponBase");
        }
        inline app::WeaponBase* create() {
            return il2cpp::create_object<app::WeaponBase>(get_class());
        }
    } // namespace WeaponBase
} // namespace app::classes::types
