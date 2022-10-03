#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IconPlacementScaler_IconOffsetPosition__Array {
        namespace {
            app::IconPlacementScaler_IconOffsetPosition__Array__Class* type_info_ref = nullptr;
        }
        app::IconPlacementScaler_IconOffsetPosition__Array__Class** type_info = &type_info_ref;
        inline app::IconPlacementScaler_IconOffsetPosition__Array__Class* get_class() {
            return il2cpp::get_class<app::IconPlacementScaler_IconOffsetPosition__Array__Class>(type_info, "", "IconPlacementScaler+IconOffsetPosition[]");
        }
        inline app::IconPlacementScaler_IconOffsetPosition__Array* create() {
            return il2cpp::create_object<app::IconPlacementScaler_IconOffsetPosition__Array>(get_class());
        }
    } // namespace IconPlacementScaler_IconOffsetPosition__Array
} // namespace app::classes::types
