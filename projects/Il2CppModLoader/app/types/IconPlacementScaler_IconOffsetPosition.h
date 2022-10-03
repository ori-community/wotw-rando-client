#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IconPlacementScaler_IconOffsetPosition {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IconPlacementScaler_IconOffsetPosition__Class** type_info;
        inline app::IconPlacementScaler_IconOffsetPosition__Class* get_class() {
            return il2cpp::get_nested_class<app::IconPlacementScaler_IconOffsetPosition__Class>(type_info, "", "IconPlacementScaler", "IconOffsetPosition");
        }
        inline app::IconPlacementScaler_IconOffsetPosition* create() {
            return il2cpp::create_object<app::IconPlacementScaler_IconOffsetPosition>(get_class());
        }
        inline app::IconPlacementScaler_IconOffsetPosition__Array* create_array(int size) {
            return il2cpp::array_new<app::IconPlacementScaler_IconOffsetPosition__Array>(get_class(), size);
        }
    } // namespace IconPlacementScaler_IconOffsetPosition
} // namespace app::classes::types
