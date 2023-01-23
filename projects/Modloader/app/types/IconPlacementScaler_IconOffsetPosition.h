#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IconPlacementScaler_IconOffsetPosition__Class.h>
#include <Modloader/app/structs/IconPlacementScaler_IconOffsetPosition.h>
#include <Modloader/app/structs/IconPlacementScaler_IconOffsetPosition__Array.h>

namespace app::classes::types {
    namespace IconPlacementScaler_IconOffsetPosition {
        inline app::IconPlacementScaler_IconOffsetPosition__Class** type_info = (app::IconPlacementScaler_IconOffsetPosition__Class**)(modloader::win::memory::resolve_rva(0x0477B760));
        inline app::IconPlacementScaler_IconOffsetPosition__Class* get_class() {
            return il2cpp::get_nested_class<app::IconPlacementScaler_IconOffsetPosition__Class>(type_info, "", "IconPlacementScaler", "IconOffsetPosition");
        }
        inline app::IconPlacementScaler_IconOffsetPosition* create() {
            return il2cpp::create_object<app::IconPlacementScaler_IconOffsetPosition>(get_class());
        }
        inline app::IconPlacementScaler_IconOffsetPosition__Array* create_array(int size) {
            return il2cpp::array_new<app::IconPlacementScaler_IconOffsetPosition__Array>(get_class(), size);
        }
        inline app::IconPlacementScaler_IconOffsetPosition__Array* create_array(const std::vector<app::IconPlacementScaler_IconOffsetPosition*>& items) {
            return il2cpp::array_new<app::IconPlacementScaler_IconOffsetPosition__Array>(get_class(), items);
        }
    } // namespace IconPlacementScaler_IconOffsetPosition
} // namespace app::classes::types
