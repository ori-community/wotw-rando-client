#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MemoryCleanUpTask {
        namespace {
            app::MemoryCleanUpTask__Class* type_info_ref = nullptr;
        }
        app::MemoryCleanUpTask__Class** type_info = &type_info_ref;
        inline app::MemoryCleanUpTask__Class* get_class() {
            return il2cpp::get_class<app::MemoryCleanUpTask__Class>(type_info, "Moon.ArtOptimization", "MemoryCleanUpTask");
        }
        inline app::MemoryCleanUpTask* create() {
            return il2cpp::create_object<app::MemoryCleanUpTask>(get_class());
        }
    } // namespace MemoryCleanUpTask
} // namespace app::classes::types
