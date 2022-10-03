#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlatformStorageWriteEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlatformStorageWriteEventHandler__Class** type_info;
        inline app::PlatformStorageWriteEventHandler__Class* get_class() {
            return il2cpp::get_class<app::PlatformStorageWriteEventHandler__Class>(type_info, "Microsoft.Xbox.Services.Xal", "PlatformStorageWriteEventHandler");
        }
        inline app::PlatformStorageWriteEventHandler* create() {
            return il2cpp::create_object<app::PlatformStorageWriteEventHandler>(get_class());
        }
    } // namespace PlatformStorageWriteEventHandler
} // namespace app::classes::types
