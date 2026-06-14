#pragma once
#include <Modloader/app/structs/ClearTrailOverCertainDistance.h>
#include <Modloader/app/structs/ClearTrailOverCertainDistance__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ClearTrailOverCertainDistance {
        inline app::ClearTrailOverCertainDistance__Class** type_info() {
            static app::ClearTrailOverCertainDistance__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ClearTrailOverCertainDistance__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ClearTrailOverCertainDistance__Class* get_class() {
            return il2cpp::get_class<app::ClearTrailOverCertainDistance__Class>(type_info(), "", "ClearTrailOverCertainDistance");
        }
        inline app::ClearTrailOverCertainDistance* create() {
            return il2cpp::create_object<app::ClearTrailOverCertainDistance>(get_class());
        }
    } // namespace ClearTrailOverCertainDistance
} // namespace app::classes::types
