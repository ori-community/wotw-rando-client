#pragma once
#include <Modloader/app/structs/SpiderEnemyLimb.h>
#include <Modloader/app/structs/SpiderEnemyLimb__Array.h>
#include <Modloader/app/structs/SpiderEnemyLimb__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderEnemyLimb {
        inline app::SpiderEnemyLimb__Class** type_info() {
            static app::SpiderEnemyLimb__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderEnemyLimb__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderEnemyLimb__Class* get_class() {
            return il2cpp::get_class<app::SpiderEnemyLimb__Class>(type_info(), "", "SpiderEnemyLimb");
        }
        inline app::SpiderEnemyLimb* create() {
            return il2cpp::create_object<app::SpiderEnemyLimb>(get_class());
        }
        inline app::SpiderEnemyLimb__Array* create_array(int size) {
            return il2cpp::array_new<app::SpiderEnemyLimb__Array>(get_class(), size);
        }
        inline app::SpiderEnemyLimb__Array* create_array(const std::vector<app::SpiderEnemyLimb*>& items) {
            return il2cpp::array_new<app::SpiderEnemyLimb__Array>(get_class(), items);
        }
    } // namespace SpiderEnemyLimb
} // namespace app::classes::types
