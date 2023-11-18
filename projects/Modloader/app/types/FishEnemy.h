#pragma once
#include <Modloader/app/structs/FishEnemy.h>
#include <Modloader/app/structs/FishEnemy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FishEnemy {
        inline app::FishEnemy__Class** type_info() {
            static app::FishEnemy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FishEnemy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FishEnemy__Class* get_class() {
            return il2cpp::get_class<app::FishEnemy__Class>(type_info(), "", "FishEnemy");
        }
        inline app::FishEnemy* create() {
            return il2cpp::create_object<app::FishEnemy>(get_class());
        }
    } // namespace FishEnemy
} // namespace app::classes::types
