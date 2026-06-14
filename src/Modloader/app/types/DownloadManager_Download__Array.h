#pragma once
#include <Modloader/app/structs/DownloadManager_Download__Array.h>
#include <Modloader/app/structs/DownloadManager_Download__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DownloadManager_Download__Array {
        inline app::DownloadManager_Download__Array__Class** type_info() {
            static app::DownloadManager_Download__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DownloadManager_Download__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DownloadManager_Download__Array__Class* get_class() {
            return il2cpp::get_class<app::DownloadManager_Download__Array__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "DownloadManager+Download[]");
        }
        inline app::DownloadManager_Download__Array* create() {
            return il2cpp::create_object<app::DownloadManager_Download__Array>(get_class());
        }
    } // namespace DownloadManager_Download__Array
} // namespace app::classes::types
