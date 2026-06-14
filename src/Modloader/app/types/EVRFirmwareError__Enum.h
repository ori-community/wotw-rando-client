#pragma once
#include <Modloader/app/structs/EVRFirmwareError__Enum.h>
#include <Modloader/app/structs/EVRFirmwareError__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EVRFirmwareError__Enum {
        inline app::EVRFirmwareError__Enum__Class** type_info() {
            static app::EVRFirmwareError__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EVRFirmwareError__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EVRFirmwareError__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRFirmwareError__Enum__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "EVRFirmwareError");
        }
        inline app::EVRFirmwareError__Enum* create() {
            return il2cpp::create_object<app::EVRFirmwareError__Enum>(get_class());
        }
    } // namespace EVRFirmwareError__Enum
} // namespace app::classes::types
