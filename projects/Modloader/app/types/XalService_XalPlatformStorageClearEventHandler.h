#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XalService_XalPlatformStorageClearEventHandler__Class.h>
#include <Modloader/app/structs/XalService_XalPlatformStorageClearEventHandler.h>

namespace app::classes::types {
    namespace XalService_XalPlatformStorageClearEventHandler {
        inline app::XalService_XalPlatformStorageClearEventHandler__Class** type_info = (app::XalService_XalPlatformStorageClearEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04796640));
        inline app::XalService_XalPlatformStorageClearEventHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::XalService_XalPlatformStorageClearEventHandler__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalService", "XalPlatformStorageClearEventHandler");
        }
        inline app::XalService_XalPlatformStorageClearEventHandler* create() {
            return il2cpp::create_object<app::XalService_XalPlatformStorageClearEventHandler>(get_class());
        }
    } // namespace XalService_XalPlatformStorageClearEventHandler
} // namespace app::classes::types
