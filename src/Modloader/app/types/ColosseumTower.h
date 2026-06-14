#pragma once
#include <Modloader/app/structs/ColosseumTower.h>
#include <Modloader/app/structs/ColosseumTower__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColosseumTower {
        inline app::ColosseumTower__Class** type_info() {
            static app::ColosseumTower__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ColosseumTower__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ColosseumTower__Class* get_class() {
            return il2cpp::get_class<app::ColosseumTower__Class>(type_info(), "", "ColosseumTower");
        }
        inline app::ColosseumTower* create() {
            return il2cpp::create_object<app::ColosseumTower>(get_class());
        }
    } // namespace ColosseumTower
} // namespace app::classes::types
