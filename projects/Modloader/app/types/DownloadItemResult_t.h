#pragma once
#include <Modloader/app/structs/DownloadItemResult_t.h>
#include <Modloader/app/structs/DownloadItemResult_t__Boxed.h>
#include <Modloader/app/structs/DownloadItemResult_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DownloadItemResult_t {
        inline app::DownloadItemResult_t__Class** type_info() {
            static app::DownloadItemResult_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DownloadItemResult_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DownloadItemResult_t__Class* get_class() {
            return il2cpp::get_class<app::DownloadItemResult_t__Class>(type_info(), "Steamworks", "DownloadItemResult_t");
        }
        inline app::DownloadItemResult_t* create() {
            return il2cpp::create_object<app::DownloadItemResult_t>(get_class());
        }
        inline app::DownloadItemResult_t__Boxed* box(app::DownloadItemResult_t value) {
            return il2cpp::box_value<app::DownloadItemResult_t__Boxed>(get_class(), value);
        }
    } // namespace DownloadItemResult_t
} // namespace app::classes::types
