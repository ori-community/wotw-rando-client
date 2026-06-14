#pragma once
#include <Modloader/app/structs/CleanupDebugger.h>
#include <Modloader/app/structs/CleanupDebugger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CleanupDebugger {
        inline app::CleanupDebugger__Class** type_info() {
            static app::CleanupDebugger__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CleanupDebugger__Class**)(modloader::win::memory::resolve_rva(0x0471BDA8));
            }
            return cache;
        }
        inline app::CleanupDebugger__Class* get_class() {
            return il2cpp::get_class<app::CleanupDebugger__Class>(type_info(), "", "CleanupDebugger");
        }
        inline app::CleanupDebugger* create() {
            return il2cpp::create_object<app::CleanupDebugger>(get_class());
        }
    } // namespace CleanupDebugger
} // namespace app::classes::types
