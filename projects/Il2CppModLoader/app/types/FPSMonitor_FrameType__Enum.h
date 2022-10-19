#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FPSMonitor_FrameType__Enum {
        inline app::FPSMonitor_FrameType__Enum__Class** type_info = (app::FPSMonitor_FrameType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0472E630));
        inline app::FPSMonitor_FrameType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::FPSMonitor_FrameType__Enum__Class>(type_info, "", "FPSMonitor", "FrameType");
        }
        inline app::FPSMonitor_FrameType__Enum* create() {
            return il2cpp::create_object<app::FPSMonitor_FrameType__Enum>(get_class());
        }
    } // namespace FPSMonitor_FrameType__Enum
} // namespace app::classes::types
