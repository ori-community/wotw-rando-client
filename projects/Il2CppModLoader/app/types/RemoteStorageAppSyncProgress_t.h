#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RemoteStorageAppSyncProgress_t {
        namespace {
            inline app::RemoteStorageAppSyncProgress_t__Class* type_info_ref = nullptr;
        }
        inline app::RemoteStorageAppSyncProgress_t__Class** type_info = &type_info_ref;
        inline app::RemoteStorageAppSyncProgress_t__Class* get_class() {
            return il2cpp::get_class<app::RemoteStorageAppSyncProgress_t__Class>(type_info, "Steamworks", "RemoteStorageAppSyncProgress_t");
        }
        inline app::RemoteStorageAppSyncProgress_t* create() {
            return il2cpp::create_object<app::RemoteStorageAppSyncProgress_t>(get_class());
        }
        inline app::RemoteStorageAppSyncProgress_t__Boxed* box(app::RemoteStorageAppSyncProgress_t value) {
            return il2cpp::box_value<app::RemoteStorageAppSyncProgress_t__Boxed>(get_class(), value);
        }
    } // namespace RemoteStorageAppSyncProgress_t
} // namespace app::classes::types
