#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DownloadHandler {
        namespace {
            inline app::DownloadHandler__Class* type_info_ref = nullptr;
        }
        inline app::DownloadHandler__Class** type_info = &type_info_ref;
        inline app::DownloadHandler__Class* get_class() {
            return il2cpp::get_class<app::DownloadHandler__Class>(type_info, "UnityEngine.Networking", "DownloadHandler");
        }
        inline app::DownloadHandler* create() {
            return il2cpp::create_object<app::DownloadHandler>(get_class());
        }
    } // namespace DownloadHandler
} // namespace app::classes::types
