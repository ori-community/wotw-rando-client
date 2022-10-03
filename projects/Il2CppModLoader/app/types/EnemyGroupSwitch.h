#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnemyGroupSwitch {
        namespace {
            app::EnemyGroupSwitch__Class* type_info_ref = nullptr;
        }
        app::EnemyGroupSwitch__Class** type_info = &type_info_ref;
        inline app::EnemyGroupSwitch__Class* get_class() {
            return il2cpp::get_class<app::EnemyGroupSwitch__Class>(type_info, "", "EnemyGroupSwitch");
        }
        inline app::EnemyGroupSwitch* create() {
            return il2cpp::create_object<app::EnemyGroupSwitch>(get_class());
        }
    } // namespace EnemyGroupSwitch
} // namespace app::classes::types
