#pragma once
#include <Modloader/app/structs/BabySandWormNest.h>
#include <Modloader/app/structs/BabySandWormNest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BabySandWormNest {
        inline app::BabySandWormNest__Class** type_info() {
            static app::BabySandWormNest__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BabySandWormNest__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BabySandWormNest__Class* get_class() {
            return il2cpp::get_class<app::BabySandWormNest__Class>(type_info(), "", "BabySandWormNest");
        }
        inline app::BabySandWormNest* create() {
            return il2cpp::create_object<app::BabySandWormNest>(get_class());
        }
    } // namespace BabySandWormNest
} // namespace app::classes::types
