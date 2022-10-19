#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FPSMonitor {
        inline app::FPSMonitor__Class** type_info = (app::FPSMonitor__Class**)(modloader::win::memory::resolve_rva(0x04798D30));
        inline app::FPSMonitor__Class* get_class() {
            return il2cpp::get_class<app::FPSMonitor__Class>(type_info, "", "FPSMonitor");
        }
        inline app::FPSMonitor* create() {
            return il2cpp::create_object<app::FPSMonitor>(get_class());
        }
    } // namespace FPSMonitor
} // namespace app::classes::types
