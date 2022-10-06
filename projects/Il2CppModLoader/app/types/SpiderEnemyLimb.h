#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderEnemyLimb {
        namespace {
            app::SpiderEnemyLimb__Class* type_info_ref = nullptr;
        }
        app::SpiderEnemyLimb__Class** type_info = &type_info_ref;
        inline app::SpiderEnemyLimb__Class* get_class() {
            return il2cpp::get_class<app::SpiderEnemyLimb__Class>(type_info, "", "SpiderEnemyLimb");
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
