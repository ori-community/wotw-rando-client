#pragma once
#include <Modloader/app/structs/XalService_XalPlatformStorageWriteEventHandler.h>
#include <Modloader/app/structs/XalService_XalPlatformStorageWriteEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XalService_XalPlatformStorageWriteEventHandler {
        inline app::XalService_XalPlatformStorageWriteEventHandler__Class** type_info() {
            static app::XalService_XalPlatformStorageWriteEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XalService_XalPlatformStorageWriteEventHandler__Class**)(modloader::win::memory::resolve_rva(0x0472D4D0));
            }
            return cache;
        }
        inline app::XalService_XalPlatformStorageWriteEventHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::XalService_XalPlatformStorageWriteEventHandler__Class>(type_info(), "Microsoft.Xbox.Services.Xal", "XalService", "XalPlatformStorageWriteEventHandler");
        }
        inline app::XalService_XalPlatformStorageWriteEventHandler* create() {
            return il2cpp::create_object<app::XalService_XalPlatformStorageWriteEventHandler>(get_class());
        }
    } // namespace XalService_XalPlatformStorageWriteEventHandler
} // namespace app::classes::types
