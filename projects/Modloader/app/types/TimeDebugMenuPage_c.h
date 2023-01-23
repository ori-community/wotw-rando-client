#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TimeDebugMenuPage_c__Class.h>
#include <Modloader/app/structs/TimeDebugMenuPage_c.h>

namespace app::classes::types {
    namespace TimeDebugMenuPage_c {
        inline app::TimeDebugMenuPage_c__Class** type_info = (app::TimeDebugMenuPage_c__Class**)(modloader::win::memory::resolve_rva(0x047790D8));
        inline app::TimeDebugMenuPage_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TimeDebugMenuPage_c__Class>(type_info, "", "TimeDebugMenuPage", "<>c");
        }
        inline app::TimeDebugMenuPage_c* create() {
            return il2cpp::create_object<app::TimeDebugMenuPage_c>(get_class());
        }
    } // namespace TimeDebugMenuPage_c
} // namespace app::classes::types
