#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ListenerSyncProcessor_ListenerSyncTask__Array {
        inline app::ListenerSyncProcessor_ListenerSyncTask__Array__Class** type_info = (app::ListenerSyncProcessor_ListenerSyncTask__Array__Class**)(modloader::win::memory::resolve_rva(0x0474C518));
        inline app::ListenerSyncProcessor_ListenerSyncTask__Array__Class* get_class() {
            return il2cpp::get_class<app::ListenerSyncProcessor_ListenerSyncTask__Array__Class>(type_info, "Moon.Wwise", "ListenerSyncProcessor+ListenerSyncTask[]");
        }
        inline app::ListenerSyncProcessor_ListenerSyncTask__Array* create() {
            return il2cpp::create_object<app::ListenerSyncProcessor_ListenerSyncTask__Array>(get_class());
        }
    } // namespace ListenerSyncProcessor_ListenerSyncTask__Array
} // namespace app::classes::types
