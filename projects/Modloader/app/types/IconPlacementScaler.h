#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IconPlacementScaler__Class.h>
#include <Modloader/app/structs/IconPlacementScaler.h>

namespace app::classes::types {
    namespace IconPlacementScaler {
        namespace {
            inline app::IconPlacementScaler__Class* type_info_ref = nullptr;
        }
        inline app::IconPlacementScaler__Class** type_info = &type_info_ref;
        inline app::IconPlacementScaler__Class* get_class() {
            return il2cpp::get_class<app::IconPlacementScaler__Class>(type_info, "", "IconPlacementScaler");
        }
        inline app::IconPlacementScaler* create() {
            return il2cpp::create_object<app::IconPlacementScaler>(get_class());
        }
    } // namespace IconPlacementScaler
} // namespace app::classes::types
