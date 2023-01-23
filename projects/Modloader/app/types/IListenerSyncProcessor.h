#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IListenerSyncProcessor__Class.h>

namespace app::classes::types {
    namespace IListenerSyncProcessor {
        inline app::IListenerSyncProcessor__Class** type_info = (app::IListenerSyncProcessor__Class**)(modloader::win::memory::resolve_rva(0x047627C0));
        inline app::IListenerSyncProcessor__Class* get_class() {
            return il2cpp::get_class<app::IListenerSyncProcessor__Class>(type_info, "Moon.Wwise", "IListenerSyncProcessor");
        }
    } // namespace IListenerSyncProcessor
} // namespace app::classes::types
