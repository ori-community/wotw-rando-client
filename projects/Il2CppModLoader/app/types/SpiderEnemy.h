#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderEnemy {
        namespace {
            app::SpiderEnemy__Class* type_info_ref = nullptr;
        }
        app::SpiderEnemy__Class** type_info = &type_info_ref;
        inline app::SpiderEnemy__Class* get_class() {
            return il2cpp::get_class<app::SpiderEnemy__Class>(type_info, "", "SpiderEnemy");
        }
        inline app::SpiderEnemy* create() {
            return il2cpp::create_object<app::SpiderEnemy>(get_class());
        }
    } // namespace SpiderEnemy
} // namespace app::classes::types
