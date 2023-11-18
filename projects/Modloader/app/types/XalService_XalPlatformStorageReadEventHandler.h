#pragma once
#include <Modloader/app/structs/XalService_XalPlatformStorageReadEventHandler.h>
#include <Modloader/app/structs/XalService_XalPlatformStorageReadEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XalService_XalPlatformStorageReadEventHandler {
        inline app::XalService_XalPlatformStorageReadEventHandler__Class** type_info() {
            static app::XalService_XalPlatformStorageReadEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XalService_XalPlatformStorageReadEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04749B08));
            }
            return cache;
        }
        inline app::XalService_XalPlatformStorageReadEventHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::XalService_XalPlatformStorageReadEventHandler__Class>(type_info(), "Microsoft.Xbox.Services.Xal", "XalService", "XalPlatformStorageReadEventHandler");
        }
        inline app::XalService_XalPlatformStorageReadEventHandler* create() {
            return il2cpp::create_object<app::XalService_XalPlatformStorageReadEventHandler>(get_class());
        }
    } // namespace XalService_XalPlatformStorageReadEventHandler
} // namespace app::classes::types
