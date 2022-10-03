#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DownloadManager {
        namespace {
            app::DownloadManager__Class* type_info_ref = nullptr;
        }
        app::DownloadManager__Class** type_info = &type_info_ref;
        inline app::DownloadManager__Class* get_class() {
            return il2cpp::get_class<app::DownloadManager__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "DownloadManager");
        }
        inline app::DownloadManager* create() {
            return il2cpp::create_object<app::DownloadManager>(get_class());
        }
    } // namespace DownloadManager
} // namespace app::classes::types
