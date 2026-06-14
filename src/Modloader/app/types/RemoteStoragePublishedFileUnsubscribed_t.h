#pragma once
#include <Modloader/app/structs/RemoteStoragePublishedFileUnsubscribed_t.h>
#include <Modloader/app/structs/RemoteStoragePublishedFileUnsubscribed_t__Boxed.h>
#include <Modloader/app/structs/RemoteStoragePublishedFileUnsubscribed_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemoteStoragePublishedFileUnsubscribed_t {
        inline app::RemoteStoragePublishedFileUnsubscribed_t__Class** type_info() {
            static app::RemoteStoragePublishedFileUnsubscribed_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RemoteStoragePublishedFileUnsubscribed_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RemoteStoragePublishedFileUnsubscribed_t__Class* get_class() {
            return il2cpp::get_class<app::RemoteStoragePublishedFileUnsubscribed_t__Class>(type_info(), "Steamworks", "RemoteStoragePublishedFileUnsubscribed_t");
        }
        inline app::RemoteStoragePublishedFileUnsubscribed_t* create() {
            return il2cpp::create_object<app::RemoteStoragePublishedFileUnsubscribed_t>(get_class());
        }
        inline app::RemoteStoragePublishedFileUnsubscribed_t__Boxed* box(app::RemoteStoragePublishedFileUnsubscribed_t value) {
            return il2cpp::box_value<app::RemoteStoragePublishedFileUnsubscribed_t__Boxed>(get_class(), value);
        }
    } // namespace RemoteStoragePublishedFileUnsubscribed_t
} // namespace app::classes::types
