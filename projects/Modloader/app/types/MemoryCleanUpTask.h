#pragma once
#include <Modloader/app/structs/MemoryCleanUpTask.h>
#include <Modloader/app/structs/MemoryCleanUpTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MemoryCleanUpTask {
        inline app::MemoryCleanUpTask__Class** type_info() {
            static app::MemoryCleanUpTask__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MemoryCleanUpTask__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MemoryCleanUpTask__Class* get_class() {
            return il2cpp::get_class<app::MemoryCleanUpTask__Class>(type_info(), "Moon.ArtOptimization", "MemoryCleanUpTask");
        }
        inline app::MemoryCleanUpTask* create() {
            return il2cpp::create_object<app::MemoryCleanUpTask>(get_class());
        }
    } // namespace MemoryCleanUpTask
} // namespace app::classes::types
