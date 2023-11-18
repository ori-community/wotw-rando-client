#pragma once
#include <Modloader/app/structs/SpiderEnemy4.h>
#include <Modloader/app/structs/SpiderEnemy4__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderEnemy4 {
        inline app::SpiderEnemy4__Class** type_info() {
            static app::SpiderEnemy4__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderEnemy4__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderEnemy4__Class* get_class() {
            return il2cpp::get_class<app::SpiderEnemy4__Class>(type_info(), "", "SpiderEnemy4");
        }
        inline app::SpiderEnemy4* create() {
            return il2cpp::create_object<app::SpiderEnemy4>(get_class());
        }
    } // namespace SpiderEnemy4
} // namespace app::classes::types
