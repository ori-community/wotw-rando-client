#pragma once
#include <Modloader/app/structs/EVRNotificationError__Enum.h>
#include <Modloader/app/structs/EVRNotificationError__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EVRNotificationError__Enum {
        inline app::EVRNotificationError__Enum__Class** type_info() {
            static app::EVRNotificationError__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EVRNotificationError__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EVRNotificationError__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRNotificationError__Enum__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "EVRNotificationError");
        }
        inline app::EVRNotificationError__Enum* create() {
            return il2cpp::create_object<app::EVRNotificationError__Enum>(get_class());
        }
    } // namespace EVRNotificationError__Enum
} // namespace app::classes::types
