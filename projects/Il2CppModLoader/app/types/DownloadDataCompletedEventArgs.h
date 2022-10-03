#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DownloadDataCompletedEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DownloadDataCompletedEventArgs__Class** type_info;
        inline app::DownloadDataCompletedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::DownloadDataCompletedEventArgs__Class>(type_info, "System.Net", "DownloadDataCompletedEventArgs");
        }
        inline app::DownloadDataCompletedEventArgs* create() {
            return il2cpp::create_object<app::DownloadDataCompletedEventArgs>(get_class());
        }
    } // namespace DownloadDataCompletedEventArgs
} // namespace app::classes::types
