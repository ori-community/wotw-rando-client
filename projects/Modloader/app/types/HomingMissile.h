#pragma once
#include <Modloader/app/structs/HomingMissile.h>
#include <Modloader/app/structs/HomingMissile__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HomingMissile {
        inline app::HomingMissile__Class** type_info() {
            static app::HomingMissile__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HomingMissile__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HomingMissile__Class* get_class() {
            return il2cpp::get_class<app::HomingMissile__Class>(type_info(), "", "HomingMissile");
        }
        inline app::HomingMissile* create() {
            return il2cpp::create_object<app::HomingMissile>(get_class());
        }
    } // namespace HomingMissile
} // namespace app::classes::types
