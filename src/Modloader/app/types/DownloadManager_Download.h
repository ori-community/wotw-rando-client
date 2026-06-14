#pragma once
#include <Modloader/app/structs/DownloadManager_Download.h>
#include <Modloader/app/structs/DownloadManager_Download__Array.h>
#include <Modloader/app/structs/DownloadManager_Download__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DownloadManager_Download {
        inline app::DownloadManager_Download__Class** type_info() {
            static app::DownloadManager_Download__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DownloadManager_Download__Class**)(modloader::win::memory::resolve_rva(0x0470D5D8));
            }
            return cache;
        }
        inline app::DownloadManager_Download__Class* get_class() {
            return il2cpp::get_nested_class<app::DownloadManager_Download__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "DownloadManager", "Download");
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
