#pragma once
#include <Modloader/app/structs/PickupMessageIcon.h>
#include <Modloader/app/structs/PickupMessageIcon__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PickupMessageIcon {
        inline app::PickupMessageIcon__Class** type_info() {
            static app::PickupMessageIcon__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PickupMessageIcon__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PickupMessageIcon__Class* get_class() {
            return il2cpp::get_class<app::PickupMessageIcon__Class>(type_info(), "", "PickupMessageIcon");
        }
        inline app::PickupMessageIcon* create() {
            return il2cpp::create_object<app::PickupMessageIcon>(get_class());
        }
    } // namespace PickupMessageIcon
} // namespace app::classes::types
