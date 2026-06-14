#pragma once
#include <Modloader/app/structs/SpiderEnemyLimb__Array.h>
#include <Modloader/app/structs/SpiderEnemyLimb__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderEnemyLimb__Array {
        inline app::SpiderEnemyLimb__Array__Class** type_info() {
            static app::SpiderEnemyLimb__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderEnemyLimb__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderEnemyLimb__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiderEnemyLimb__Array__Class>(type_info(), "", "SpiderEnemyLimb[]");
        }
        inline app::SpiderEnemyLimb__Array* create() {
            return il2cpp::create_object<app::SpiderEnemyLimb__Array>(get_class());
        }
    } // namespace SpiderEnemyLimb__Array
} // namespace app::classes::types
