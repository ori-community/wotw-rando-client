#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlatformHelper {
        inline app::PlatformHelper__Class** type_info = (app::PlatformHelper__Class**)(modloader::win::memory::resolve_rva(0x0478D540));
        inline app::PlatformHelper__Class* get_class() {
            return il2cpp::get_class<app::PlatformHelper__Class>(type_info, "System.Threading", "PlatformHelper");
        }
        inline app::PlatformHelper* create() {
            return il2cpp::create_object<app::PlatformHelper>(get_class());
        }
    } // namespace PlatformHelper
} // namespace app::classes::types
