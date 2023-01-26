#pragma once
#include <Modloader/app/structs/SpiderEnemy.h>
#include <Modloader/app/structs/SpiderEnemy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderEnemy {
        inline app::SpiderEnemy__Class** type_info() {
            static app::SpiderEnemy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderEnemy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderEnemy__Class* get_class() {
            return il2cpp::get_class<app::SpiderEnemy__Class>(type_info(), "", "SpiderEnemy");
        }
        inline app::SpiderEnemy* create() {
            return il2cpp::create_object<app::SpiderEnemy>(get_class());
        }
    } // namespace SpiderEnemy
} // namespace app::classes::types
