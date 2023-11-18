#pragma once
#include <Modloader/app/structs/DownloadManager.h>
#include <Modloader/app/structs/DownloadManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DownloadManager {
        inline app::DownloadManager__Class** type_info() {
            static app::DownloadManager__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DownloadManager__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DownloadManager__Class* get_class() {
            return il2cpp::get_class<app::DownloadManager__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "DownloadManager");
        }
        inline app::DownloadManager* create() {
            return il2cpp::create_object<app::DownloadManager>(get_class());
        }
    } // namespace DownloadManager
} // namespace app::classes::types
