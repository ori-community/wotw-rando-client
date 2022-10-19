#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ListenerSyncProcessor {
        inline app::ListenerSyncProcessor__Class** type_info = (app::ListenerSyncProcessor__Class**)(modloader::win::memory::resolve_rva(0x04710548));
        inline app::ListenerSyncProcessor__Class* get_class() {
            return il2cpp::get_class<app::ListenerSyncProcessor__Class>(type_info, "Moon.Wwise", "ListenerSyncProcessor");
        }
        inline app::ListenerSyncProcessor* create() {
            return il2cpp::create_object<app::ListenerSyncProcessor>(get_class());
        }
    } // namespace ListenerSyncProcessor
} // namespace app::classes::types
