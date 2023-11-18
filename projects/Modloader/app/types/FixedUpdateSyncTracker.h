#pragma once
#include <Modloader/app/structs/FixedUpdateSyncTracker.h>
#include <Modloader/app/structs/FixedUpdateSyncTracker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FixedUpdateSyncTracker {
        inline app::FixedUpdateSyncTracker__Class** type_info() {
            static app::FixedUpdateSyncTracker__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FixedUpdateSyncTracker__Class**)(modloader::win::memory::resolve_rva(0x04760790));
            }
            return cache;
        }
        inline app::FixedUpdateSyncTracker__Class* get_class() {
            return il2cpp::get_class<app::FixedUpdateSyncTracker__Class>(type_info(), "", "FixedUpdateSyncTracker");
        }
        inline app::FixedUpdateSyncTracker* create() {
            return il2cpp::create_object<app::FixedUpdateSyncTracker>(get_class());
        }
    } // namespace FixedUpdateSyncTracker
} // namespace app::classes::types
