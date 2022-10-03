#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FPSMonitor_FrameType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FPSMonitor_FrameType__Enum__Class** type_info;
        inline app::FPSMonitor_FrameType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::FPSMonitor_FrameType__Enum__Class>(type_info, "", "FPSMonitor", "FrameType");
        }
        inline app::FPSMonitor_FrameType__Enum* create() {
            return il2cpp::create_object<app::FPSMonitor_FrameType__Enum>(get_class());
        }
    } // namespace FPSMonitor_FrameType__Enum
} // namespace app::classes::types
