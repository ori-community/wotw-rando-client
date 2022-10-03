#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkMonitorErrorCode__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkMonitorErrorCode__Enum__Class** type_info;
        inline app::AkMonitorErrorCode__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkMonitorErrorCode__Enum__Class>(type_info, "", "AkMonitorErrorCode");
        }
        inline app::AkMonitorErrorCode__Enum* create() {
            return il2cpp::create_object<app::AkMonitorErrorCode__Enum>(get_class());
        }
    } // namespace AkMonitorErrorCode__Enum
} // namespace app::classes::types
