#pragma once
#include <Modloader/app/structs/ListenerSyncProcessor_ListenerSyncTask__Array.h>
#include <Modloader/app/structs/ListenerSyncProcessor_ListenerSyncTask__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListenerSyncProcessor_ListenerSyncTask__Array {
        inline app::ListenerSyncProcessor_ListenerSyncTask__Array__Class** type_info() {
            static app::ListenerSyncProcessor_ListenerSyncTask__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListenerSyncProcessor_ListenerSyncTask__Array__Class**)(modloader::win::memory::resolve_rva(0x0474C518));
            }
            return cache;
        }
        inline app::ListenerSyncProcessor_ListenerSyncTask__Array__Class* get_class() {
            return il2cpp::get_class<app::ListenerSyncProcessor_ListenerSyncTask__Array__Class>(type_info(), "Moon.Wwise", "ListenerSyncProcessor+ListenerSyncTask[]");
        }
        inline app::ListenerSyncProcessor_ListenerSyncTask__Array* create() {
            return il2cpp::create_object<app::ListenerSyncProcessor_ListenerSyncTask__Array>(get_class());
        }
    } // namespace ListenerSyncProcessor_ListenerSyncTask__Array
} // namespace app::classes::types
