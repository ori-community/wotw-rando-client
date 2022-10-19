#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DownloadManager_Download {
        inline app::DownloadManager_Download__Class** type_info = (app::DownloadManager_Download__Class**)(modloader::win::memory::resolve_rva(0x0470D5D8));
        inline app::DownloadManager_Download__Class* get_class() {
            return il2cpp::get_nested_class<app::DownloadManager_Download__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "DownloadManager", "Download");
        }
        inline app::DownloadManager_Download* create() {
            return il2cpp::create_object<app::DownloadManager_Download>(get_class());
        }
        inline app::DownloadManager_Download__Array* create_array(int size) {
            return il2cpp::array_new<app::DownloadManager_Download__Array>(get_class(), size);
        }
        inline app::DownloadManager_Download__Array* create_array(const std::vector<app::DownloadManager_Download*>& items) {
            return il2cpp::array_new<app::DownloadManager_Download__Array>(get_class(), items);
        }
    } // namespace DownloadManager_Download
} // namespace app::classes::types
