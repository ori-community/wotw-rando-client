#pragma once
#include <Modloader/app/structs/TimesliceDebugger.h>
#include <Modloader/app/structs/TimesliceDebugger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TimesliceDebugger {
        inline app::TimesliceDebugger__Class** type_info() {
            static app::TimesliceDebugger__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TimesliceDebugger__Class**)(modloader::win::memory::resolve_rva(0x04747F40));
            }
            return cache;
        }
        inline app::TimesliceDebugger__Class* get_class() {
            return il2cpp::get_class<app::TimesliceDebugger__Class>(type_info(), "", "TimesliceDebugger");
        }
        inline app::TimesliceDebugger* create() {
            return il2cpp::create_object<app::TimesliceDebugger>(get_class());
        }
    } // namespace TimesliceDebugger
} // namespace app::classes::types
