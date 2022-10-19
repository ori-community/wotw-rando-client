#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IListenerSyncProcessor {
        inline app::IListenerSyncProcessor__Class** type_info = (app::IListenerSyncProcessor__Class**)(modloader::win::memory::resolve_rva(0x047627C0));
        inline app::IListenerSyncProcessor__Class* get_class() {
            return il2cpp::get_class<app::IListenerSyncProcessor__Class>(type_info, "Moon.Wwise", "IListenerSyncProcessor");
        }
    } // namespace IListenerSyncProcessor
} // namespace app::classes::types
