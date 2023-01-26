#pragma once
#include <Modloader/app/structs/EDeviceActivityLevel__Enum.h>
#include <Modloader/app/structs/EDeviceActivityLevel__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EDeviceActivityLevel__Enum {
        inline app::EDeviceActivityLevel__Enum__Class** type_info() {
            static app::EDeviceActivityLevel__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EDeviceActivityLevel__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EDeviceActivityLevel__Enum__Class* get_class() {
            return il2cpp::get_class<app::EDeviceActivityLevel__Enum__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "EDeviceActivityLevel");
        }
        inline app::EDeviceActivityLevel__Enum* create() {
            return il2cpp::create_object<app::EDeviceActivityLevel__Enum>(get_class());
        }
    } // namespace EDeviceActivityLevel__Enum
} // namespace app::classes::types
