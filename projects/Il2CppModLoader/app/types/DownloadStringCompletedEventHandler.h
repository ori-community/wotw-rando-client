#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DownloadStringCompletedEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DownloadStringCompletedEventHandler__Class** type_info;
        inline app::DownloadStringCompletedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::DownloadStringCompletedEventHandler__Class>(type_info, "System.Net", "DownloadStringCompletedEventHandler");
        }
        inline app::DownloadStringCompletedEventHandler* create() {
            return il2cpp::create_object<app::DownloadStringCompletedEventHandler>(get_class());
        }
    } // namespace DownloadStringCompletedEventHandler
} // namespace app::classes::types
