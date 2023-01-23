#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DownloadManager_Download__Array__Class.h>
#include <Modloader/app/structs/DownloadManager_Download__Array.h>

namespace app::classes::types {
    namespace DownloadManager_Download__Array {
        namespace {
            inline app::DownloadManager_Download__Array__Class* type_info_ref = nullptr;
        }
        inline app::DownloadManager_Download__Array__Class** type_info = &type_info_ref;
        inline app::DownloadManager_Download__Array__Class* get_class() {
            return il2cpp::get_class<app::DownloadManager_Download__Array__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "DownloadManager+Download[]");
        }
        inline app::DownloadManager_Download__Array* create() {
            return il2cpp::create_object<app::DownloadManager_Download__Array>(get_class());
        }
    } // namespace DownloadManager_Download__Array
} // namespace app::classes::types
