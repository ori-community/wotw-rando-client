#pragma once
#include <Modloader/app/structs/BabyWormWater.h>
#include <Modloader/app/structs/BabyWormWater__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BabyWormWater {
        inline app::BabyWormWater__Class** type_info() {
            static app::BabyWormWater__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BabyWormWater__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BabyWormWater__Class* get_class() {
            return il2cpp::get_class<app::BabyWormWater__Class>(type_info(), "", "BabyWormWater");
        }
        inline app::BabyWormWater* create() {
            return il2cpp::create_object<app::BabyWormWater>(get_class());
        }
    } // namespace BabyWormWater
} // namespace app::classes::types
