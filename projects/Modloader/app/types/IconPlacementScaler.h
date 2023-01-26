#pragma once
#include <Modloader/app/structs/IconPlacementScaler.h>
#include <Modloader/app/structs/IconPlacementScaler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IconPlacementScaler {
        inline app::IconPlacementScaler__Class** type_info() {
            static app::IconPlacementScaler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IconPlacementScaler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IconPlacementScaler__Class* get_class() {
            return il2cpp::get_class<app::IconPlacementScaler__Class>(type_info(), "", "IconPlacementScaler");
        }
        inline app::IconPlacementScaler* create() {
            return il2cpp::create_object<app::IconPlacementScaler>(get_class());
        }
    } // namespace IconPlacementScaler
} // namespace app::classes::types
