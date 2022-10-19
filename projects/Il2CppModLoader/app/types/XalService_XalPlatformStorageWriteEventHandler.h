#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XalService_XalPlatformStorageWriteEventHandler {
        inline app::XalService_XalPlatformStorageWriteEventHandler__Class** type_info = (app::XalService_XalPlatformStorageWriteEventHandler__Class**)(modloader::win::memory::resolve_rva(0x0472D4D0));
        inline app::XalService_XalPlatformStorageWriteEventHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::XalService_XalPlatformStorageWriteEventHandler__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalService", "XalPlatformStorageWriteEventHandler");
        }
        inline app::XalService_XalPlatformStorageWriteEventHandler* create() {
            return il2cpp::create_object<app::XalService_XalPlatformStorageWriteEventHandler>(get_class());
        }
    } // namespace XalService_XalPlatformStorageWriteEventHandler
} // namespace app::classes::types
