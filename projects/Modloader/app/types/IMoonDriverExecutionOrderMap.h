#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IMoonDriverExecutionOrderMap__Class.h>

namespace app::classes::types {
    namespace IMoonDriverExecutionOrderMap {
        inline app::IMoonDriverExecutionOrderMap__Class** type_info = (app::IMoonDriverExecutionOrderMap__Class**)(modloader::win::memory::resolve_rva(0x047581E8));
        inline app::IMoonDriverExecutionOrderMap__Class* get_class() {
            return il2cpp::get_class<app::IMoonDriverExecutionOrderMap__Class>(type_info, "Moon", "IMoonDriverExecutionOrderMap");
        }
    } // namespace IMoonDriverExecutionOrderMap
} // namespace app::classes::types
