#pragma once
#include <Modloader/app/structs/CleanupDebugger_c.h>
#include <Modloader/app/structs/CleanupDebugger_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CleanupDebugger_c {
        inline app::CleanupDebugger_c__Class** type_info() {
            static app::CleanupDebugger_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CleanupDebugger_c__Class**)(modloader::win::memory::resolve_rva(0x04733F80));
            }
            return cache;
        }
        inline app::CleanupDebugger_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CleanupDebugger_c__Class>(type_info(), "", "CleanupDebugger", "<>c");
        }
        inline app::CleanupDebugger_c* create() {
            return il2cpp::create_object<app::CleanupDebugger_c>(get_class());
        }
    } // namespace CleanupDebugger_c
} // namespace app::classes::types
