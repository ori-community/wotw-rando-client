#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlatformStorageWriteEventHandler {
        inline app::PlatformStorageWriteEventHandler__Class** type_info = (app::PlatformStorageWriteEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04791300));
        inline app::PlatformStorageWriteEventHandler__Class* get_class() {
            return il2cpp::get_class<app::PlatformStorageWriteEventHandler__Class>(type_info, "Microsoft.Xbox.Services.Xal", "PlatformStorageWriteEventHandler");
        }
        inline app::PlatformStorageWriteEventHandler* create() {
            return il2cpp::create_object<app::PlatformStorageWriteEventHandler>(get_class());
        }
    } // namespace PlatformStorageWriteEventHandler
} // namespace app::classes::types
