#pragma once
#include <Modloader/app/structs/ChargingSootEnemyAnimations.h>
#include <Modloader/app/structs/ChargingSootEnemyAnimations__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChargingSootEnemyAnimations {
        inline app::ChargingSootEnemyAnimations__Class** type_info() {
            static app::ChargingSootEnemyAnimations__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChargingSootEnemyAnimations__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChargingSootEnemyAnimations__Class* get_class() {
            return il2cpp::get_class<app::ChargingSootEnemyAnimations__Class>(type_info(), "", "ChargingSootEnemyAnimations");
        }
        inline app::ChargingSootEnemyAnimations* create() {
            return il2cpp::create_object<app::ChargingSootEnemyAnimations>(get_class());
        }
    } // namespace ChargingSootEnemyAnimations
} // namespace app::classes::types
