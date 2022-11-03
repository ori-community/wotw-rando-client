#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WwiseSyncProcessor_RtpcSyncTask {
        inline app::WwiseSyncProcessor_RtpcSyncTask__Class** type_info = (app::WwiseSyncProcessor_RtpcSyncTask__Class**)(modloader::win::memory::resolve_rva(0x0475CB00));
        inline app::WwiseSyncProcessor_RtpcSyncTask__Class* get_class() {
            return il2cpp::get_nested_class<app::WwiseSyncProcessor_RtpcSyncTask__Class>(type_info, "Moon.Wwise", "WwiseSyncProcessor", "RtpcSyncTask");
        }
        inline app::WwiseSyncProcessor_RtpcSyncTask* create() {
            return il2cpp::create_object<app::WwiseSyncProcessor_RtpcSyncTask>(get_class());
        }
        inline app::WwiseSyncProcessor_RtpcSyncTask__Array* create_array(int size) {
            return il2cpp::array_new<app::WwiseSyncProcessor_RtpcSyncTask__Array>(get_class(), size);
        }
        inline app::WwiseSyncProcessor_RtpcSyncTask__Array* create_array(const std::vector<app::WwiseSyncProcessor_RtpcSyncTask*>& items) {
            return il2cpp::array_new<app::WwiseSyncProcessor_RtpcSyncTask__Array>(get_class(), items);
        }
    } // namespace WwiseSyncProcessor_RtpcSyncTask
} // namespace app::classes::types
