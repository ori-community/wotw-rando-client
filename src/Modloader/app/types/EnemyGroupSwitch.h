#pragma once
#include <Modloader/app/structs/EnemyGroupSwitch.h>
#include <Modloader/app/structs/EnemyGroupSwitch__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnemyGroupSwitch {
        inline app::EnemyGroupSwitch__Class** type_info() {
            static app::EnemyGroupSwitch__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnemyGroupSwitch__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnemyGroupSwitch__Class* get_class() {
            return il2cpp::get_class<app::EnemyGroupSwitch__Class>(type_info(), "", "EnemyGroupSwitch");
        }
        inline app::EnemyGroupSwitch* create() {
            return il2cpp::create_object<app::EnemyGroupSwitch>(get_class());
        }
    } // namespace EnemyGroupSwitch
} // namespace app::classes::types
