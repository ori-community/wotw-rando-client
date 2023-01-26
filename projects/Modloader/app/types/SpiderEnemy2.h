#pragma once
#include <Modloader/app/structs/SpiderEnemy2.h>
#include <Modloader/app/structs/SpiderEnemy2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderEnemy2 {
        inline app::SpiderEnemy2__Class** type_info() {
            static app::SpiderEnemy2__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderEnemy2__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderEnemy2__Class* get_class() {
            return il2cpp::get_class<app::SpiderEnemy2__Class>(type_info(), "", "SpiderEnemy2");
        }
        inline app::SpiderEnemy2* create() {
            return il2cpp::create_object<app::SpiderEnemy2>(get_class());
        }
    } // namespace SpiderEnemy2
} // namespace app::classes::types
