#pragma once
#include <Modloader/app/structs/RemoteStorageAppSyncedServer_t.h>
#include <Modloader/app/structs/RemoteStorageAppSyncedServer_t__Boxed.h>
#include <Modloader/app/structs/RemoteStorageAppSyncedServer_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemoteStorageAppSyncedServer_t {
        inline app::RemoteStorageAppSyncedServer_t__Class** type_info() {
            static app::RemoteStorageAppSyncedServer_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RemoteStorageAppSyncedServer_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RemoteStorageAppSyncedServer_t__Class* get_class() {
            return il2cpp::get_class<app::RemoteStorageAppSyncedServer_t__Class>(type_info(), "Steamworks", "RemoteStorageAppSyncedServer_t");
        }
        inline app::RemoteStorageAppSyncedServer_t* create() {
            return il2cpp::create_object<app::RemoteStorageAppSyncedServer_t>(get_class());
        }
        inline app::RemoteStorageAppSyncedServer_t__Boxed* box(app::RemoteStorageAppSyncedServer_t value) {
            return il2cpp::box_value<app::RemoteStorageAppSyncedServer_t__Boxed>(get_class(), value);
        }
    } // namespace RemoteStorageAppSyncedServer_t
} // namespace app::classes::types
