#pragma once
#include <Modloader/app/structs/XmlDownloadManager_GetNonFileStreamAsync_d_5.h>
#include <Modloader/app/structs/XmlDownloadManager_GetNonFileStreamAsync_d_5__Boxed.h>
#include <Modloader/app/structs/XmlDownloadManager_GetNonFileStreamAsync_d_5__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlDownloadManager_GetNonFileStreamAsync_d_5 {
        inline app::XmlDownloadManager_GetNonFileStreamAsync_d_5__Class** type_info() {
            static app::XmlDownloadManager_GetNonFileStreamAsync_d_5__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlDownloadManager_GetNonFileStreamAsync_d_5__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlDownloadManager_GetNonFileStreamAsync_d_5__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlDownloadManager_GetNonFileStreamAsync_d_5__Class>(type_info(), "System.Xml", "XmlDownloadManager", "<GetNonFileStreamAsync>d__5");
        }
        inline app::XmlDownloadManager_GetNonFileStreamAsync_d_5* create() {
            return il2cpp::create_object<app::XmlDownloadManager_GetNonFileStreamAsync_d_5>(get_class());
        }
        inline app::XmlDownloadManager_GetNonFileStreamAsync_d_5__Boxed* box(app::XmlDownloadManager_GetNonFileStreamAsync_d_5 value) {
            return il2cpp::box_value<app::XmlDownloadManager_GetNonFileStreamAsync_d_5__Boxed>(get_class(), value);
        }
    } // namespace XmlDownloadManager_GetNonFileStreamAsync_d_5
} // namespace app::classes::types
