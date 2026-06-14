#pragma once
#include <Modloader/app/structs/ListenerSyncProcessor_ListenerSyncTask.h>
#include <Modloader/app/structs/ListenerSyncProcessor_ListenerSyncTask__Array.h>
#include <Modloader/app/structs/ListenerSyncProcessor_ListenerSyncTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListenerSyncProcessor_ListenerSyncTask {
        inline app::ListenerSyncProcessor_ListenerSyncTask__Class** type_info() {
            static app::ListenerSyncProcessor_ListenerSyncTask__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListenerSyncProcessor_ListenerSyncTask__Class**)(modloader::win::memory::resolve_rva(0x0475CB80));
            }
            return cache;
        }
        inline app::ListenerSyncProcessor_ListenerSyncTask__Class* get_class() {
            return il2cpp::get_nested_class<app::ListenerSyncProcessor_ListenerSyncTask__Class>(type_info(), "Moon.Wwise", "ListenerSyncProcessor", "ListenerSyncTask");
        }
        inline app::ListenerSyncProcessor_ListenerSyncTask* create() {
            return il2cpp::create_object<app::ListenerSyncProcessor_ListenerSyncTask>(get_class());
        }
        inline app::ListenerSyncProcessor_ListenerSyncTask__Array* create_array(int size) {
            return il2cpp::array_new<app::ListenerSyncProcessor_ListenerSyncTask__Array>(get_class(), size);
        }
        inline app::ListenerSyncProcessor_ListenerSyncTask__Array* create_array(const std::vector<app::ListenerSyncProcessor_ListenerSyncTask*>& items) {
            return il2cpp::array_new<app::ListenerSyncProcessor_ListenerSyncTask__Array>(get_class(), items);
        }
    } // namespace ListenerSyncProcessor_ListenerSyncTask
} // namespace app::classes::types
