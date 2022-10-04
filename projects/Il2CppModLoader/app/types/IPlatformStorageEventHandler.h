#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPlatformStorageEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPlatformStorageEventHandler__Class** type_info;
        inline app::IPlatformStorageEventHandler__Class* get_class() {
            return il2cpp::get_class<app::IPlatformStorageEventHandler__Class>(type_info, "frameworks.xboxLive", "IPlatformStorageEventHandler");
        }
        inline app::IPlatformStorageEventHandler* create() {
            return il2cpp::create_object<app::IPlatformStorageEventHandler>(get_class());
        }
    } // namespace IPlatformStorageEventHandler
} // namespace app::classes::types
