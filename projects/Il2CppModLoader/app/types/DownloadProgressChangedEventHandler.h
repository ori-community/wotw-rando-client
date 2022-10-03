#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DownloadProgressChangedEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DownloadProgressChangedEventHandler__Class** type_info;
        inline app::DownloadProgressChangedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::DownloadProgressChangedEventHandler__Class>(type_info, "System.Net", "DownloadProgressChangedEventHandler");
        }
        inline app::DownloadProgressChangedEventHandler* create() {
            return il2cpp::create_object<app::DownloadProgressChangedEventHandler>(get_class());
        }
    } // namespace DownloadProgressChangedEventHandler
} // namespace app::classes::types
