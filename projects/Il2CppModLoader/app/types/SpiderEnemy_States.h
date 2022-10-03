#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderEnemy_States {
        namespace {
            app::SpiderEnemy_States__Class* type_info_ref = nullptr;
        }
        app::SpiderEnemy_States__Class** type_info = &type_info_ref;
        inline app::SpiderEnemy_States__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderEnemy_States__Class>(type_info, "", "SpiderEnemy", "States");
        }
        inline app::SpiderEnemy_States* create() {
            return il2cpp::create_object<app::SpiderEnemy_States>(get_class());
        }
    } // namespace SpiderEnemy_States
} // namespace app::classes::types
