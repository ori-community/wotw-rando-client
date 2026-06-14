#pragma once
#include <Modloader/app/structs/RemoteStorageUnsubscribePublishedFileResult_t.h>
#include <Modloader/app/structs/RemoteStorageUnsubscribePublishedFileResult_t__Boxed.h>
#include <Modloader/app/structs/RemoteStorageUnsubscribePublishedFileResult_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemoteStorageUnsubscribePublishedFileResult_t {
        inline app::RemoteStorageUnsubscribePublishedFileResult_t__Class** type_info() {
            static app::RemoteStorageUnsubscribePublishedFileResult_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RemoteStorageUnsubscribePublishedFileResult_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RemoteStorageUnsubscribePublishedFileResult_t__Class* get_class() {
            return il2cpp::get_class<app::RemoteStorageUnsubscribePublishedFileResult_t__Class>(type_info(), "Steamworks", "RemoteStorageUnsubscribePublishedFileResult_t");
        }
        inline app::RemoteStorageUnsubscribePublishedFileResult_t* create() {
            return il2cpp::create_object<app::RemoteStorageUnsubscribePublishedFileResult_t>(get_class());
        }
        inline app::RemoteStorageUnsubscribePublishedFileResult_t__Boxed* box(app::RemoteStorageUnsubscribePublishedFileResult_t value) {
            return il2cpp::box_value<app::RemoteStorageUnsubscribePublishedFileResult_t__Boxed>(get_class(), value);
        }
    } // namespace RemoteStorageUnsubscribePublishedFileResult_t
} // namespace app::classes::types
