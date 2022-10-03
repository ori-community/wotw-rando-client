#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlatformStorageReadEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlatformStorageReadEventHandler__Class** type_info;
        inline app::PlatformStorageReadEventHandler__Class* get_class() {
            return il2cpp::get_class<app::PlatformStorageReadEventHandler__Class>(type_info, "Microsoft.Xbox.Services.Xal", "PlatformStorageReadEventHandler");
        }
        inline app::PlatformStorageReadEventHandler* create() {
            return il2cpp::create_object<app::PlatformStorageReadEventHandler>(get_class());
        }
    } // namespace PlatformStorageReadEventHandler
} // namespace app::classes::types
