#pragma once
#include <Modloader/app/structs/TimesliceDebugger_c.h>
#include <Modloader/app/structs/TimesliceDebugger_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimesliceDebugger_c {
        inline app::TimesliceDebugger_c__Class** type_info() {
            static app::TimesliceDebugger_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimesliceDebugger_c__Class**)(modloader::win::memory::resolve_rva(0x0477BE50));
            }
            return cache;
        }
        inline app::TimesliceDebugger_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TimesliceDebugger_c__Class>(type_info(), "", "TimesliceDebugger", "<>c");
        }
        inline app::TimesliceDebugger_c* create() {
            return il2cpp::create_object<app::TimesliceDebugger_c>(get_class());
        }
    } // namespace TimesliceDebugger_c
} // namespace app::classes::types
