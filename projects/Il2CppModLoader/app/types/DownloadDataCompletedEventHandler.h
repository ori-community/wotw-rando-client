#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DownloadDataCompletedEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DownloadDataCompletedEventHandler__Class** type_info;
        inline app::DownloadDataCompletedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::DownloadDataCompletedEventHandler__Class>(type_info, "System.Net", "DownloadDataCompletedEventHandler");
        }
        inline app::DownloadDataCompletedEventHandler* create() {
            return il2cpp::create_object<app::DownloadDataCompletedEventHandler>(get_class());
        }
    } // namespace DownloadDataCompletedEventHandler
} // namespace app::classes::types
