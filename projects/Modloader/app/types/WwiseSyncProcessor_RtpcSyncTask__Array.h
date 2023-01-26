#pragma once
#include <Modloader/app/structs/WwiseSyncProcessor_RtpcSyncTask__Array.h>
#include <Modloader/app/structs/WwiseSyncProcessor_RtpcSyncTask__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WwiseSyncProcessor_RtpcSyncTask__Array {
        inline app::WwiseSyncProcessor_RtpcSyncTask__Array__Class** type_info() {
            static app::WwiseSyncProcessor_RtpcSyncTask__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WwiseSyncProcessor_RtpcSyncTask__Array__Class**)(modloader::win::memory::resolve_rva(0x04717710));
            }
            return cache;
        }
        inline app::WwiseSyncProcessor_RtpcSyncTask__Array__Class* get_class() {
            return il2cpp::get_class<app::WwiseSyncProcessor_RtpcSyncTask__Array__Class>(type_info(), "Moon.Wwise", "WwiseSyncProcessor+RtpcSyncTask[]");
        }
        inline app::WwiseSyncProcessor_RtpcSyncTask__Array* create() {
            return il2cpp::create_object<app::WwiseSyncProcessor_RtpcSyncTask__Array>(get_class());
        }
    } // namespace WwiseSyncProcessor_RtpcSyncTask__Array
} // namespace app::classes::types
