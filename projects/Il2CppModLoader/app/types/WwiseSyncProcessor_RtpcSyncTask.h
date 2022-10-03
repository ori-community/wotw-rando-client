#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WwiseSyncProcessor_RtpcSyncTask {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WwiseSyncProcessor_RtpcSyncTask__Class** type_info;
        inline app::WwiseSyncProcessor_RtpcSyncTask__Class* get_class() {
            return il2cpp::get_nested_class<app::WwiseSyncProcessor_RtpcSyncTask__Class>(type_info, "Moon.Wwise", "WwiseSyncProcessor", "RtpcSyncTask");
        }
        inline app::WwiseSyncProcessor_RtpcSyncTask* create() {
            return il2cpp::create_object<app::WwiseSyncProcessor_RtpcSyncTask>(get_class());
        }
        inline app::WwiseSyncProcessor_RtpcSyncTask__Array* create_array(int size) {
            return il2cpp::array_new<app::WwiseSyncProcessor_RtpcSyncTask__Array>(get_class(), size);
        }
    } // namespace WwiseSyncProcessor_RtpcSyncTask
} // namespace app::classes::types
