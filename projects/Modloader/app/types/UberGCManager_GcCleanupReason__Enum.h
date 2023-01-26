#pragma once
#include <Modloader/app/structs/UberGCManager_GcCleanupReason__Enum.h>
#include <Modloader/app/structs/UberGCManager_GcCleanupReason__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberGCManager_GcCleanupReason__Enum {
        inline app::UberGCManager_GcCleanupReason__Enum__Class** type_info() {
            static app::UberGCManager_GcCleanupReason__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberGCManager_GcCleanupReason__Enum__Class**)(modloader::win::memory::resolve_rva(0x04712580));
            }
            return cache;
        }
        inline app::UberGCManager_GcCleanupReason__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberGCManager_GcCleanupReason__Enum__Class>(type_info(), "", "UberGCManager", "GcCleanupReason");
        }
        inline app::UberGCManager_GcCleanupReason__Enum* create() {
            return il2cpp::create_object<app::UberGCManager_GcCleanupReason__Enum>(get_class());
        }
    } // namespace UberGCManager_GcCleanupReason__Enum
} // namespace app::classes::types
