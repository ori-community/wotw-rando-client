#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlatformStorageReadEventHandler {
        inline app::PlatformStorageReadEventHandler__Class** type_info = (app::PlatformStorageReadEventHandler__Class**)(modloader::win::memory::resolve_rva(0x0473F048));
        inline app::PlatformStorageReadEventHandler__Class* get_class() {
            return il2cpp::get_class<app::PlatformStorageReadEventHandler__Class>(type_info, "Microsoft.Xbox.Services.Xal", "PlatformStorageReadEventHandler");
        }
        inline app::PlatformStorageReadEventHandler* create() {
            return il2cpp::create_object<app::PlatformStorageReadEventHandler>(get_class());
        }
    } // namespace PlatformStorageReadEventHandler
} // namespace app::classes::types
