#pragma once
#include <Modloader/app/structs/DownloadClanActivityCountsResult_t.h>
#include <Modloader/app/structs/DownloadClanActivityCountsResult_t__Boxed.h>
#include <Modloader/app/structs/DownloadClanActivityCountsResult_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DownloadClanActivityCountsResult_t {
        inline app::DownloadClanActivityCountsResult_t__Class** type_info() {
            static app::DownloadClanActivityCountsResult_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DownloadClanActivityCountsResult_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DownloadClanActivityCountsResult_t__Class* get_class() {
            return il2cpp::get_class<app::DownloadClanActivityCountsResult_t__Class>(type_info(), "Steamworks", "DownloadClanActivityCountsResult_t");
        }
        inline app::DownloadClanActivityCountsResult_t* create() {
            return il2cpp::create_object<app::DownloadClanActivityCountsResult_t>(get_class());
        }
        inline app::DownloadClanActivityCountsResult_t__Boxed* box(app::DownloadClanActivityCountsResult_t value) {
            return il2cpp::box_value<app::DownloadClanActivityCountsResult_t__Boxed>(get_class(), value);
        }
    } // namespace DownloadClanActivityCountsResult_t
} // namespace app::classes::types
