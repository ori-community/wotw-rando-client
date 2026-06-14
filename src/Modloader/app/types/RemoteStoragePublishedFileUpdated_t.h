#pragma once
#include <Modloader/app/structs/RemoteStoragePublishedFileUpdated_t.h>
#include <Modloader/app/structs/RemoteStoragePublishedFileUpdated_t__Boxed.h>
#include <Modloader/app/structs/RemoteStoragePublishedFileUpdated_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemoteStoragePublishedFileUpdated_t {
        inline app::RemoteStoragePublishedFileUpdated_t__Class** type_info() {
            static app::RemoteStoragePublishedFileUpdated_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RemoteStoragePublishedFileUpdated_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RemoteStoragePublishedFileUpdated_t__Class* get_class() {
            return il2cpp::get_class<app::RemoteStoragePublishedFileUpdated_t__Class>(type_info(), "Steamworks", "RemoteStoragePublishedFileUpdated_t");
        }
        inline app::RemoteStoragePublishedFileUpdated_t* create() {
            return il2cpp::create_object<app::RemoteStoragePublishedFileUpdated_t>(get_class());
        }
        inline app::RemoteStoragePublishedFileUpdated_t__Boxed* box(app::RemoteStoragePublishedFileUpdated_t value) {
            return il2cpp::box_value<app::RemoteStoragePublishedFileUpdated_t__Boxed>(get_class(), value);
        }
    } // namespace RemoteStoragePublishedFileUpdated_t
} // namespace app::classes::types
