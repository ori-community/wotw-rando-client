#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WwiseSyncProcessor_RtpcSyncTask__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WwiseSyncProcessor_RtpcSyncTask__Array__Class** type_info;
        inline app::WwiseSyncProcessor_RtpcSyncTask__Array__Class* get_class() {
            return il2cpp::get_class<app::WwiseSyncProcessor_RtpcSyncTask__Array__Class>(type_info, "Moon.Wwise", "WwiseSyncProcessor+RtpcSyncTask[]");
        }
        inline app::WwiseSyncProcessor_RtpcSyncTask__Array* create() {
            return il2cpp::create_object<app::WwiseSyncProcessor_RtpcSyncTask__Array>(get_class());
        }
    } // namespace WwiseSyncProcessor_RtpcSyncTask__Array
} // namespace app::classes::types
