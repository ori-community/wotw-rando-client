#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EVRFirmwareError__Enum {
        namespace {
            inline app::EVRFirmwareError__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EVRFirmwareError__Enum__Class** type_info = &type_info_ref;
        inline app::EVRFirmwareError__Enum__Class* get_class() {
            return il2cpp::get_class<app::EVRFirmwareError__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EVRFirmwareError");
        }
        inline app::EVRFirmwareError__Enum* create() {
            return il2cpp::create_object<app::EVRFirmwareError__Enum>(get_class());
        }
    } // namespace EVRFirmwareError__Enum
} // namespace app::classes::types
