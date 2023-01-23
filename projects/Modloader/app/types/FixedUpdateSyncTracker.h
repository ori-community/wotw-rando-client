#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FixedUpdateSyncTracker__Class.h>
#include <Modloader/app/structs/FixedUpdateSyncTracker.h>

namespace app::classes::types {
    namespace FixedUpdateSyncTracker {
        inline app::FixedUpdateSyncTracker__Class** type_info = (app::FixedUpdateSyncTracker__Class**)(modloader::win::memory::resolve_rva(0x04760790));
        inline app::FixedUpdateSyncTracker__Class* get_class() {
            return il2cpp::get_class<app::FixedUpdateSyncTracker__Class>(type_info, "", "FixedUpdateSyncTracker");
        }
        inline app::FixedUpdateSyncTracker* create() {
            return il2cpp::create_object<app::FixedUpdateSyncTracker>(get_class());
        }
    } // namespace FixedUpdateSyncTracker
} // namespace app::classes::types
