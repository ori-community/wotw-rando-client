#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EDeviceActivityLevel__Enum {
        namespace {
            inline app::EDeviceActivityLevel__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EDeviceActivityLevel__Enum__Class** type_info = &type_info_ref;
        inline app::EDeviceActivityLevel__Enum__Class* get_class() {
            return il2cpp::get_class<app::EDeviceActivityLevel__Enum__Class>(type_info, "ZenFulcrum.VR.OpenVRBinding", "EDeviceActivityLevel");
        }
        inline app::EDeviceActivityLevel__Enum* create() {
            return il2cpp::create_object<app::EDeviceActivityLevel__Enum>(get_class());
        }
    } // namespace EDeviceActivityLevel__Enum
} // namespace app::classes::types
