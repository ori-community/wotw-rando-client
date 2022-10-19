#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPlatformUser {
        inline app::IPlatformUser__Class** type_info = (app::IPlatformUser__Class**)(modloader::win::memory::resolve_rva(0x04797120));
        inline app::IPlatformUser__Class* get_class() {
            return il2cpp::get_class<app::IPlatformUser__Class>(type_info, "SystemIntegration", "IPlatformUser");
        }
    } // namespace IPlatformUser
} // namespace app::classes::types
