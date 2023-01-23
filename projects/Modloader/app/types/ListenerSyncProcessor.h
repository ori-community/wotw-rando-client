#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ListenerSyncProcessor__Class.h>
#include <Modloader/app/structs/ListenerSyncProcessor.h>

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
