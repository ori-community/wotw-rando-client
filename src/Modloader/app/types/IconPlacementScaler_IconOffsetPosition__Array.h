#pragma once
#include <Modloader/app/structs/IconPlacementScaler_IconOffsetPosition__Array.h>
#include <Modloader/app/structs/IconPlacementScaler_IconOffsetPosition__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IconPlacementScaler_IconOffsetPosition__Array {
        inline app::IconPlacementScaler_IconOffsetPosition__Array__Class** type_info() {
            static app::IconPlacementScaler_IconOffsetPosition__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IconPlacementScaler_IconOffsetPosition__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IconPlacementScaler_IconOffsetPosition__Array__Class* get_class() {
            return il2cpp::get_class<app::IconPlacementScaler_IconOffsetPosition__Array__Class>(type_info(), "", "IconPlacementScaler+IconOffsetPosition[]");
        }
        inline app::IconPlacementScaler_IconOffsetPosition__Array* create() {
            return il2cpp::create_object<app::IconPlacementScaler_IconOffsetPosition__Array>(get_class());
        }
    } // namespace IconPlacementScaler_IconOffsetPosition__Array
} // namespace app::classes::types
