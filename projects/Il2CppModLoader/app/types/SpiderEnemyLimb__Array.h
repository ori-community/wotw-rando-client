#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderEnemyLimb__Array {
        namespace {
            app::SpiderEnemyLimb__Array__Class* type_info_ref = nullptr;
        }
        app::SpiderEnemyLimb__Array__Class** type_info = &type_info_ref;
        inline app::SpiderEnemyLimb__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiderEnemyLimb__Array__Class>(type_info, "", "SpiderEnemyLimb[]");
        }
        inline app::SpiderEnemyLimb__Array* create() {
            return il2cpp::create_object<app::SpiderEnemyLimb__Array>(get_class());
        }
    } // namespace SpiderEnemyLimb__Array
} // namespace app::classes::types
