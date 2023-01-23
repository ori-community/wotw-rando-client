#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RemoteStorageAppSyncedClient_t__Class.h>
#include <Modloader/app/structs/RemoteStorageAppSyncedClient_t.h>
#include <Modloader/app/structs/RemoteStorageAppSyncedClient_t__Boxed.h>

namespace app::classes::types {
    namespace RemoteStorageAppSyncedClient_t {
        namespace {
            inline app::RemoteStorageAppSyncedClient_t__Class* type_info_ref = nullptr;
        }
        inline app::RemoteStorageAppSyncedClient_t__Class** type_info = &type_info_ref;
        inline app::RemoteStorageAppSyncedClient_t__Class* get_class() {
            return il2cpp::get_class<app::RemoteStorageAppSyncedClient_t__Class>(type_info, "Steamworks", "RemoteStorageAppSyncedClient_t");
        }
        inline app::RemoteStorageAppSyncedClient_t* create() {
            return il2cpp::create_object<app::RemoteStorageAppSyncedClient_t>(get_class());
        }
        inline app::RemoteStorageAppSyncedClient_t__Boxed* box(app::RemoteStorageAppSyncedClient_t value) {
            return il2cpp::box_value<app::RemoteStorageAppSyncedClient_t__Boxed>(get_class(), value);
        }
    } // namespace RemoteStorageAppSyncedClient_t
} // namespace app::classes::types
