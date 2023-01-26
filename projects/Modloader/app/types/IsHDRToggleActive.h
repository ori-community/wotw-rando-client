#pragma once
#include <Modloader/app/structs/IsHDRToggleActive.h>
#include <Modloader/app/structs/IsHDRToggleActive__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsHDRToggleActive {
        inline app::IsHDRToggleActive__Class** type_info() {
            static app::IsHDRToggleActive__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsHDRToggleActive__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsHDRToggleActive__Class* get_class() {
            return il2cpp::get_class<app::IsHDRToggleActive__Class>(type_info(), "", "IsHDRToggleActive");
        }
        inline app::IsHDRToggleActive* create() {
            return il2cpp::create_object<app::IsHDRToggleActive>(get_class());
        }
    } // namespace IsHDRToggleActive
} // namespace app::classes::types
