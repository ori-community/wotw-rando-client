#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XalService_XalPlatformStorageReadEventHandler {
        inline app::XalService_XalPlatformStorageReadEventHandler__Class** type_info = (app::XalService_XalPlatformStorageReadEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04749B08));
        inline app::XalService_XalPlatformStorageReadEventHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::XalService_XalPlatformStorageReadEventHandler__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalService", "XalPlatformStorageReadEventHandler");
        }
        inline app::XalService_XalPlatformStorageReadEventHandler* create() {
            return il2cpp::create_object<app::XalService_XalPlatformStorageReadEventHandler>(get_class());
        }
    } // namespace XalService_XalPlatformStorageReadEventHandler
} // namespace app::classes::types
