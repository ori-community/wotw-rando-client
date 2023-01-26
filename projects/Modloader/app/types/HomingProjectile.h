#pragma once
#include <Modloader/app/structs/HomingProjectile.h>
#include <Modloader/app/structs/HomingProjectile__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HomingProjectile {
        inline app::HomingProjectile__Class** type_info() {
            static app::HomingProjectile__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HomingProjectile__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HomingProjectile__Class* get_class() {
            return il2cpp::get_class<app::HomingProjectile__Class>(type_info(), "", "HomingProjectile");
        }
        inline app::HomingProjectile* create() {
            return il2cpp::create_object<app::HomingProjectile>(get_class());
        }
    } // namespace HomingProjectile
} // namespace app::classes::types
