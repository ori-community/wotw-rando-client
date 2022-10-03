#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XalService_XalPlatformStorageWriteEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XalService_XalPlatformStorageWriteEventHandler__Class** type_info;
        inline app::XalService_XalPlatformStorageWriteEventHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::XalService_XalPlatformStorageWriteEventHandler__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalService", "XalPlatformStorageWriteEventHandler");
        }
        inline app::XalService_XalPlatformStorageWriteEventHandler* create() {
            return il2cpp::create_object<app::XalService_XalPlatformStorageWriteEventHandler>(get_class());
        }
    } // namespace XalService_XalPlatformStorageWriteEventHandler
} // namespace app::classes::types
