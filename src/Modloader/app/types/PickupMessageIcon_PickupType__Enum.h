#pragma once
#include <Modloader/app/structs/PickupMessageIcon_PickupType__Enum.h>
#include <Modloader/app/structs/PickupMessageIcon_PickupType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PickupMessageIcon_PickupType__Enum {
        inline app::PickupMessageIcon_PickupType__Enum__Class** type_info() {
            static app::PickupMessageIcon_PickupType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PickupMessageIcon_PickupType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PickupMessageIcon_PickupType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PickupMessageIcon_PickupType__Enum__Class>(type_info(), "", "PickupMessageIcon", "PickupType");
        }
        inline app::PickupMessageIcon_PickupType__Enum* create() {
            return il2cpp::create_object<app::PickupMessageIcon_PickupType__Enum>(get_class());
        }
    } // namespace PickupMessageIcon_PickupType__Enum
} // namespace app::classes::types
