#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XalService_XalPlatformStorageClearEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XalService_XalPlatformStorageClearEventHandler__Class** type_info;
        inline app::XalService_XalPlatformStorageClearEventHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::XalService_XalPlatformStorageClearEventHandler__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalService", "XalPlatformStorageClearEventHandler");
        }
        inline app::XalService_XalPlatformStorageClearEventHandler* create() {
            return il2cpp::create_object<app::XalService_XalPlatformStorageClearEventHandler>(get_class());
        }
    } // namespace XalService_XalPlatformStorageClearEventHandler
} // namespace app::classes::types
