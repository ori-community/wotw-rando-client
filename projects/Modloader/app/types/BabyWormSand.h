#pragma once
#include <Modloader/app/structs/BabyWormSand.h>
#include <Modloader/app/structs/BabyWormSand__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BabyWormSand {
        inline app::BabyWormSand__Class** type_info() {
            static app::BabyWormSand__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BabyWormSand__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BabyWormSand__Class* get_class() {
            return il2cpp::get_class<app::BabyWormSand__Class>(type_info(), "", "BabyWormSand");
        }
        inline app::BabyWormSand* create() {
            return il2cpp::create_object<app::BabyWormSand>(get_class());
        }
    } // namespace BabyWormSand
} // namespace app::classes::types
