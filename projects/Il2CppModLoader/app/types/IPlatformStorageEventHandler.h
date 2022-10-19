#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPlatformStorageEventHandler {
        inline app::IPlatformStorageEventHandler__Class** type_info = (app::IPlatformStorageEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04704E78));
        inline app::IPlatformStorageEventHandler__Class* get_class() {
            return il2cpp::get_class<app::IPlatformStorageEventHandler__Class>(type_info, "frameworks.xboxLive", "IPlatformStorageEventHandler");
        }
    } // namespace IPlatformStorageEventHandler
} // namespace app::classes::types
