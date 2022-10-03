#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DownloadStringCompletedEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DownloadStringCompletedEventArgs__Class** type_info;
        inline app::DownloadStringCompletedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::DownloadStringCompletedEventArgs__Class>(type_info, "System.Net", "DownloadStringCompletedEventArgs");
        }
        inline app::DownloadStringCompletedEventArgs* create() {
            return il2cpp::create_object<app::DownloadStringCompletedEventArgs>(get_class());
        }
    } // namespace DownloadStringCompletedEventArgs
} // namespace app::classes::types
