#pragma once
#include <Modloader/app/structs/DownloadHandler.h>
#include <Modloader/app/structs/DownloadHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DownloadHandler {
        inline app::DownloadHandler__Class** type_info() {
            static app::DownloadHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DownloadHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DownloadHandler__Class* get_class() {
            return il2cpp::get_class<app::DownloadHandler__Class>(type_info(), "UnityEngine.Networking", "DownloadHandler");
        }
        inline app::DownloadHandler* create() {
            return il2cpp::create_object<app::DownloadHandler>(get_class());
        }
    } // namespace DownloadHandler
} // namespace app::classes::types
