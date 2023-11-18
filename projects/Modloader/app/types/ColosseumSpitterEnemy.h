#pragma once
#include <Modloader/app/structs/ColosseumSpitterEnemy.h>
#include <Modloader/app/structs/ColosseumSpitterEnemy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColosseumSpitterEnemy {
        inline app::ColosseumSpitterEnemy__Class** type_info() {
            static app::ColosseumSpitterEnemy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ColosseumSpitterEnemy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ColosseumSpitterEnemy__Class* get_class() {
            return il2cpp::get_class<app::ColosseumSpitterEnemy__Class>(type_info(), "", "ColosseumSpitterEnemy");
        }
        inline app::ColosseumSpitterEnemy* create() {
            return il2cpp::create_object<app::ColosseumSpitterEnemy>(get_class());
        }
    } // namespace ColosseumSpitterEnemy
} // namespace app::classes::types
