#pragma once
#include <Modloader/app/structs/SpiderEnemy_States.h>
#include <Modloader/app/structs/SpiderEnemy_States__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderEnemy_States {
        inline app::SpiderEnemy_States__Class** type_info() {
            static app::SpiderEnemy_States__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderEnemy_States__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderEnemy_States__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderEnemy_States__Class>(type_info(), "", "SpiderEnemy", "States");
        }
        inline app::SpiderEnemy_States* create() {
            return il2cpp::create_object<app::SpiderEnemy_States>(get_class());
        }
    } // namespace SpiderEnemy_States
} // namespace app::classes::types
